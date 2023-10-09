/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:49:29 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/09 15:05:35 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*alts;

	alts = (char *)s;
	i = ft_strlen(s);
	if (c == '\0')
		return (alts + i);
	while (i != 0)
	{
		if (alts[i] == (char)c)
			return (alts + i);
		i--;
	}
	if (s[0] == (char)c)
		return (alts);
	return (0);
}
