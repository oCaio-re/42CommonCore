/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:35:33 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/09 15:07:37 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c -= 32);
	}
	else
		return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    printf("%c\n", ft_toupper(argv[1][0]));
    printf("%c\n", toupper(argv[1][0]));
} */