/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:11:59 by caioba            #+#    #+#             */
/*   Updated: 2023/10/13 14:31:28 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	size_t			copied;
	size_t			length;

	copied = 0;
	length = ft_strlen(s);
	if (start + len >= length)
		len = length - start;
	if (start >= length)
		ret = malloc(1);
	else
		ret = malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	while (start < length && copied < len)
		ret[copied++] = s[start++];
	ret[copied] = '\0';
	return (ret);
}
