/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caioba <caioba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:00:25 by caioba            #+#    #+#             */
/*   Updated: 2023/10/06 16:05:08 by caioba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char*)(dst + i) = *(char*)(src + i);
		i++;
	}
	return (dst);
}

#include <stdio.h>
int main(void)
{
    char src[10] = "metallica";
    char dest[10] = "tinhaalgo";
    ft_memcpy(dest, src, 9);
    printf("%s", dest);
}