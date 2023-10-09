/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:16:43 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/09 17:43:59 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*placeholder;

	placeholder = (unsigned char *)b;
	while (len > 0)
	{
		*placeholder = (unsigned char)c;
		placeholder++;
		len--;
	}
	return (b);
}
