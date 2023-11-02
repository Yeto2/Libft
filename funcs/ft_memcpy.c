#include <stdlib.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *strdst = (char *) dst;
    char *strsrc = (char *) src;
    int i;
    i = 0;
    while(i < n)
    {
        *strdst++ = *strsrc++;
        i++;
    }
    return (strdst);
}
