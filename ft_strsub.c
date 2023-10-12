/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caioba <caioba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:52:47 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/12 14:05:07 by caioba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*blank;

	blank = "";
	i = 0;
	if (!s)
		return (NULL);
	ft_memset(blank, '\0', len);
	if (!blank)
		return (NULL);
	if (s)
	{
		while (i != len)
		{
			blank[i] = s[start + i];
			i++;
		}
	}
	blank[len] = '\0';
	return (blank);
}
