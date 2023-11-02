#ifndef LIBFT_H
#define LIBFT_H

void ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(char c);
int ft_isascii(int c);
int ft_isdigit(int n);
int ft_isprint(int c);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
size_t strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlcpy(char * restrict dst,const char * restrict src, size_t dstsize);
int ft_strlen(const char *s);
char ft_tolower(int c);
char ft_toupper(int c);
#endif