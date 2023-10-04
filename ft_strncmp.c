/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:01:29 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/04 13:01:31 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	printf("%d\n", ft_strncmp("caio", "caioba", 7)); // -1
	printf("%d\n", ft_strncmp("klone", "klone", 8)); // 0
	printf("%d\n", ft_strncmp("sim", "nao", 5)); // 1
	printf("%d\n", ft_strncmp("nao", "sim", 1)); // -1
	printf("%d\n", ft_strncmp("caioba", "caio", 5)); // 1
	printf("%d\n", ft_strncmp("d", "farofa", 4)); // -1	
}*/