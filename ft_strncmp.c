/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:01:29 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/09 17:11:49 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	z;

	z = 0;
	while ((s1[z] != '\0' || s2[z] != '\0') && n--)
	{
		if (s1[z] != s2[z])
			return ((unsigned char)s1[z] - (unsigned char)s2[z]);
		z++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	printf("%d\n", ft_strncmp("caio", "caioba", 7)); // -1
	printf("%d\n", ft_strncmp("klone", "klone", 8)); // 0
	printf("%d\n", ft_strncmp("sim", "nao", 5)); // 1
	printf("%d\n", ft_strncmp("nao", "sim", 1)); // -1
	printf("%d\n", ft_strncmp("caioba", "caio", 5)); // 1
	printf("%d\n", ft_strncmp("d", "farofa", 4)); // -1	
}*/