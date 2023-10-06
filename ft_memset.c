/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caioba <caioba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:16:43 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/06 15:14:45 by caioba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;

	if (!b)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
