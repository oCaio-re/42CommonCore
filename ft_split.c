/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:12:32 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/13 14:12:59 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_strlen(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_split(int size, char **strs, char *sep)
{
	int		full_length;
	int		index;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_compute_final_length(strs, size, ft_strlen(sep));
	string = (char *)malloc((full_length + 1) * sizeof(char));
	d = string;
	index = 0;
	while (index < size)
	{
		ft_strcpy(d, strs[index]);
		d += ft_strlen(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		}
		index++;
	}
	*d = '\0';
	return (string);
}

/* #include <stdio.h>
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Ola";
	strs[1] = "colega";
	strs[2] = "voce eh demais";
	separator = "|";
	result = ft_split(size, strs, separator);
	printf("%s\n", result);
	free(result);
} */ 