/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:57:08 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/03 15:57:09 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	isletter;
	int	isnum;

	isletter = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	isnum = (c >= '0' && c <= '9');
	if (isletter || isnum)
	{
		return (1);
	}
	else
		return (0);
}
/* #include <stdio.h>
int main(void)
{
	printf("%d\n", ft_isalnum('f'));
	printf("%d\n", ft_isalnum('$'));
	printf("%d\n", ft_isalnum('2'));
	printf("%d\n", ft_isalnum('#'));
	printf("%d\n", ft_isalnum('h'));
	printf("%d\n", ft_isalnum('&'));
	printf("%d\n", ft_isalnum('7'));
} */