#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int	ft_isalpha(int c);
int ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(unsigned char c);
int ft_isprint(int c);
int	ft_strlen(char *str);
void	*ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char    ft_toupper(char c);
char    ft_tolower(char c);


int	ft_strncmp(char *s1, char *s2, unsigned int n);



int	ft_atoi(const char *nptr);

char    *ft_strdup(char *src);

#endif