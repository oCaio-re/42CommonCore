/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caioba <caioba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:17:14 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/06 14:53:22 by caioba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
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