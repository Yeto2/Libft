#include <stdlib.h>
void *ft_memset(void *b, int c, size_t len)
 {
    unsigned int i;
    i = 0;

    char *str;
    str = (char *)b;


    while(i < len)
    {
      str[i] = c;
      i++;
    }

    return (str);
 }