/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:12:32 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/26 01:57:57 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_ret(char **ret)
{
	int	i;

	i = 0;
	while (ret[i])
		free(ret[i++]);
	free(ret);
}

static void	fill_strings(char **strings, const char *s, char c)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] != c && s[i])
		{
			strings[j][k] = s[i];
			k++;
			i++;
		}
		if (k != 0)
		{
			strings[j][k] = '\0';
			j++;
			continue ;
		}
		i++;
	}
	strings[j] = NULL;
}

static int	check_splits(char const *s, char c)
{
	int	splits;
	int	i;

	i = 0;
	splits = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			splits++;
			continue ;
		}
		i++;
	}
	return (splits);
}

static void	make_strings(char **ret, const char *s, char c)
{
	size_t	i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] != c && s[i])
		{
			j++;
			i++;
		}
		if (j > 0)
		{
			ret[k] = malloc(j + 1);
			if (ret[k] == NULL)
				return ;
			k++;
			continue ;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;

	i = 0;
	ret = (char **) malloc(sizeof(char *) * (check_splits(s, c) + 1));
	if (ret == NULL)
		return (NULL);
	make_strings(ret, s, c);
	while (i < check_splits(s, c))
	{
		if (ret[i] == NULL)
		{
			free_ret(ret);
			return (NULL);
		}
		i++;
	}
	fill_strings(ret, s, c);
	return (ret);
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