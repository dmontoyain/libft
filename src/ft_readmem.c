#include "libft.h"

size_t  read_file_mem(char *filename, char **store)
{
    char        buf[BUFFSIZE];
    int         fd;
    int16_t     ret;
    uint64_t    len;
    char        *content;
    char        *tmp;

    len = 0;
    content = NULL;
    fd = open(filename, O_RDONLY);
    if (fd <= 0)
        return (0);
    while ((ret = read(fd, buf, BUFFSIZE)))
    {
        tmp = content;
        content = memjoin(tmp, &buf[0], len, ret);
        if (tmp)
            free(tmp);
        len += ret;
    }
    return len;
}