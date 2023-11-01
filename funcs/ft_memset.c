#include <stdlib.h>
char ft_memset(void *b, int c, size_t len)
 {
    int i;
    i = 0;

    unsigned char *str;
    str = (unsigned char *)b;


    while(i < len)
    {
      str[i] = c;
      i++;
    }

    return (*str);
 }