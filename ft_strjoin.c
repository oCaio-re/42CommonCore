/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:06:27 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/12 17:15:53 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		total_size;
	char	*conc_str;

	total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	conc_str = (char *) malloc(total_size * sizeof(char));
	i = 0;
	if (conc_str == NULL)
		return (NULL);
	while (s1[i])
	{
		conc_str[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i])
	{
		conc_str[j] = s2[i];
		i++;
		j++;
	}
	conc_str[j] = '\0';
	return (conc_str);
}

/* 
#include <stdio.h>
int main(void)
{
	char word1[] = "Tite ";
	char word2[] = "eh do mengao";
	printf("%s", ft_strjoin(word1, word2));	
} */ 