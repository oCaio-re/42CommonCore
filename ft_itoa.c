/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:40:27 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/23 14:39:54 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_to_string(char *ptr, int n, int index, int size)
{
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		ptr[index--] = n % 10 + 48;
		n /= 10;
	}
	ptr[size] = '\0';
}

static int	check_size(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		size ++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		size ++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		size;
	char	*int_min;
	char	*zero;

	zero = "0";
	int_min = "-2147483648";
	if (n == -2147483648 || n == 0)
	{
		if (n == -2147483648)
			ptr = ft_strdup(int_min);
		else
			ptr = ft_strdup(zero);
		return (ptr);
	}
	size = check_size(n);
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	i = size - 1;
	write_to_string(ptr, n, i, size);
	return (ptr);
}
