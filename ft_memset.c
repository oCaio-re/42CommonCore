/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:16:43 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/04 15:47:16 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#define SIZE sizeof(*argv[1]) /* / sizeof(char) */

char *ft_memset(char *str, int c, size_t n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s", ft_memset(argv[1], 'S', SIZE));
}