/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumgor <mtumgor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:57:14 by mtumgor           #+#    #+#             */
/*   Updated: 2023/02/14 16:58:05 by mtumgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*buffer;
	int		i;
	int		j;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	buffer = (char *)malloc(sizeof(char) * (size + 1));
	if (!buffer || !s1 || !s2)
		return (NULL);
	while (s1[i] != 0)
	{
		buffer[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		buffer[i] = s2[j];
		i++;
		j++;
	}
	buffer[size] = 0;
	return (buffer);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	arr = (char *)malloc(count * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, count * size);
	return (arr);
}
