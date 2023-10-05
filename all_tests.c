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
    printf("4.ISASCII: Is it 0x80 an ascii char? %d\n", ft_isascii(0x80));
    printf("5.ISPRINT Is d a printable char?(1) %d\n", ft_isprint('d'));
    printf("6.STRLEN: Is it 7?(Esporte) %d\n", ft_strlen("Esporte"));
    printf("7.MEMSET: Is it 6 x S?(World | S) %p\n", ft_memset(src, 'S', 6));
    printf("11.STRLCPY: %d | %s\n", ft_strlcpy(dest, src, 10), dest);
    printf("12.STRLCAT: Is it correct (7)? %d\n", ft_strlcat("Eu fiz", "correto!", 6));
    printf("13.TOUPPER: c becomes C? %c\n", ft_toupper('c'));
    printf("14.TOLOWER: C becomes c? %c\n", ft_toupper('C'));
    printf("17.STRNCMP: (caio caio|b|a) %d\n", ft_strncmp("caio", "caioba", 7));
    printf("21.ATOI: -12345(string) %d(int)\n", ft_atoi("-12345"));
    printf("22.CALLOC: -12345(string) %d(int)\n", ft_atoi("-12345"));
    printf("23.STRDUP: Is it farofa? %s\n", ft_strdup("farofa"));

    return (0);
}

