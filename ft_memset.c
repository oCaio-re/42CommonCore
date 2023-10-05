/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:16:43 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/05 19:08:46 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#define SIZE sizeof(*argv[1]) /* / sizeof(char) */

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

/* #include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s", ft_memset(argv[1], 'S', SIZE));
} */