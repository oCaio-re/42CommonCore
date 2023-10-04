/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:02:51 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/04 14:30:56 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sin;
	int	res;

	res = 0;
	i = 0;
	sin = 1;
	if (nptr[i] == '-')
	{
		sin *= -1;
		i++;
	}
	while (nptr[i])
	{
		res *= 10;
		res += nptr[i] - '0';
		i++;
	}
	return (res * sin);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_atoi("-1234567890"));
}*/