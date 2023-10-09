/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:04:41 by caioba            #+#    #+#             */
/*   Updated: 2023/10/09 17:59:16 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*alts;
	size_t			i;

	alts = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		if (alts[i] == (unsigned char)c)
			return (&alts[i]);
		i++;
	}
	return (NULL);
}
