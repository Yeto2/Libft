char ft_tolower(int c)
{
    if(c >= 'a' && c <= 'z')
        c += 32;
    return (c);
}