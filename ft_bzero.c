#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* #include <stdio.h>
int main(void)
{
	char sample[] = "metallica";

	ft_bzero(sample, 9);
	printf("%c", sample[0]);
} */