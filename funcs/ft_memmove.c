#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *strdst = (char *)dst;
    char *strsrc = (char *)src;
    int i = 0;
    int srclen = 0;
    while(strsrc[srclen])
      srclen++;
    char copy[srclen];
    while(strsrc[i]){
        copy[i] = strsrc[i];
        i++;      
    }
    i =0;
    while(i < len)
    {
        strdst[i] = copy[i];
        i++;
    }
    return (strdst);
}