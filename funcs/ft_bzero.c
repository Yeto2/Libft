#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
    int i;
    i = 0;
    unsigned char *str = s;

    while(i < n)
    {
        str[i] = '\0';
        i++;
    }
}