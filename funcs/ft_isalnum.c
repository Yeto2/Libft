// #include <stdio.h>

int ft_isalnum(unsigned char character)
{
    if((character >= 'a' && character <= 'z') 
    || (character >= 'A' && character <= 'Z')
    || (character >= 0 && character <= 9))
    {
         return (1);
    }else
    {
        return (0);
    }
}

// int main()
// {
//     int n = ft_isalnum('^');
//     printf("%d" , n);
//     return 0;
// }