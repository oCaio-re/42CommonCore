/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:23:21 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/05 17:59:19 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE sizeof(*src) / sizeof(char)

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = SIZE;
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}

/* #include <stdio.h>
int	main()
{
	char src[] = "World!";
	char dest[] = "Hello ";
	printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
} */