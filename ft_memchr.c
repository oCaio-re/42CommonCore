/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caioba <caioba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:04:41 by caioba            #+#    #+#             */
/*   Updated: 2023/10/06 21:30:14 by caioba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

#include <stdio.h>
int main(void)
{
	char src[] = "xcaio2@gmail.com";
	char destination[20];

	ft
	for(int i = 0; i < 20; i++)
		printf("destination[%d] = %c\n", i, destination[i]);
	printf("destination: %s\n", destination);

}