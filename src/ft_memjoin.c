#include "libft.h"

char    *memjoin(char *s1, char *s2, uint64_t size1, uint64_t size2)
{
    char        *newstr;
    uint32_t    i;
    uint32_t    j; 

    if (!(newstr = (char *)malloc(sizeof(char) * (size1 + size2 + 1))))
        return 0;
    i = -1;
    j = -1;
    while (++i < size1)
        newstr[++j] = s1[i];
    i = -1;
    while (++i < size2)
        newstr[++j] = s2[i];
    return (newstr);
}