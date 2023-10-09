/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:34:27 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/09 15:06:55 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c += 32);
	}
	else
		return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    printf("%c\n", ft_tolower(argv[1][0]));
    printf("%c\n", tolower(argv[1][0]));
} */