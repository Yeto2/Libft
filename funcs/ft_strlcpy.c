#include <stdlib.h>

int ft_strlen(const char *s)
{
    int i;
    i = 0;
    while(s[i])
        i++;
    return (i);
}
size_t ft_strlcpy(char * restrict dst,const char * restrict src, size_t dstsize)
{
    int i;
    i = 0;
    int srclen = ft_strlen(src);
    int spcpy;
    if(dstsize > 0)
    {
        spcpy = dstsize - 1;
    }else{
        spcpy = 0;
    }
    if(spcpy > srclen)
        spcpy = srclen;
    while(src[i] && i < spcpy)
    {
      if(src[i])
      {
        dst[i] = src[i];
        i++;
      }
    }
    dst[spcpy] = '\0';
    return (spcpy);
}