#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    printf("Is it a digit? %d\n", ft_isdigit('d'));
    printf("Is it a printable character? %d\n", ft_isprint('d'));
    printf("c becomes C? %d\n", ft_toupper('c'));
    printf("C becomes c? %d\n", ft_toupper('C'));
    printf("-12345(string) %d(int)\n", ft_atoi("-12345"));
    printf("Is str_len = 7? %d\n", ft_strlen("Esporte"));
    printf("Is it correct (7)? %d\n", ft_strlcat("Eu fiz", "correto!", 6));

    return (0);
}
