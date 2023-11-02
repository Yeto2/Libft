#include <stdlib.h>

 int ft_strlen(const char *s)
{
    int i;
    i = 0;
    while(s[i])
        i++;
    return (i);
}   
size_t strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
 int i;
 i = 0;
 int srclen = ft_strlen(src);
 int dstlen;
 int spcat;

 if (dst[0] != '\0')
{
    dstlen = ft_strlen(dst);
}else
{
    dstlen = 0;
}
 if(dstsize > 0)
 {
    spcat = dstsize - 1;
 }else
 {
    spcat = 0;
 }
 if(spcat > srclen)
 {
    spcat = srclen;
 }
 
 while(src[i] && i < spcat)
 {
    dst[i] = src[i];
    i++;
 }
 dst[spcat] = '\0';
 return (dstlen + spcat);

}