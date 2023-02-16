#include "get_next_line.h"
int main()
{
    int fd;

    fd = open("foo.txt",O_RDONLY);
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
}