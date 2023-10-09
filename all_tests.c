#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char src[] = "World!"; //strlcpy
	char dest[] = "Hello "; //strlcpy
    printf("1.ISALPHA: Is it an alphabetic char?(1) %d\n", ft_isalpha('d'));
    printf("2.ISDIGID: Is it a digit? %d\n", ft_isdigit('d'));
    printf("3.ISALNUM: Is # an alphanumeric char? %d\n", ft_isalnum('#'));
    printf("4.ISASCII: Is it 0x81 an ascii char? %d\n", ft_isascii(0x81));
    printf("5.ISPRINT Is d a printable char?(1) %d\n", ft_isprint('d'));
    printf("6.STRLEN: Is it 7?(Esporte) %d\n", ft_strlen("Esporte"));
    printf("7.MEMSET: Is it 6 x S?(World | S) %p\n", ft_memset(src, 'S', 6));
    printf("8.BZERO: Is it 6 x 0?(World | 0) 000000\n");
    printf("9.MEMCPY: ***test commented within the function***\n");
    printf("10.MEMMOVE: ***test commented within the function***\n");
    printf("11.STRLCPY: %zu | %s\n", ft_strlcpy(dest, src, 10), dest);
    printf("12.STRLCAT: Is it correct (7)? %zu\n", ft_strlcat("Eu fiz", "correto!", 6));
    printf("13.TOUPPER: c becomes C? %c\n", ft_toupper('c'));
    printf("14.TOLOWER: C becomes c? %c\n", ft_toupper('C'));
    printf("15.STRCHR: after first '@'? %s\n", ft_strchr("xcaio2@gmail.com", '@'));
    printf("16.STRCHR: after last '@'? %s\n", ft_strrchr("@xcaio2@gmail.com", '@'));
    printf("17.STRNCMP: (caio caio|b|a) %d\n", ft_strncmp("caio", "caioba", 7));
    printf("18.MEMCHR: ***test commented within the function***\n");
    printf("19.MEMCMP: Is it less than 0? %d\n", ft_memcmp(src, dest, 3));
    printf("20.STRNSTR: farofa de feijao | %s\n", ft_strnstr("farofa de feijao", "fei", 16));
    printf("21.ATOI: -12345(string) %d(int)\n", ft_atoi("-12345"));
    printf("22.CALLOC: ***test commented within the function***\n");
    printf("23.STRDUP: Is it farofa? %s\n", ft_strdup("farofa"));

    return (0);
}