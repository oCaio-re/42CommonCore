/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:23:27 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/04 12:23:28 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE sizeof(src) / sizeof(char)

char    *ft_strdup(char *src)
{
        int             index;
        char    *dest;
        char    *d;

        index = 0;
        d = ((dest = (char *)malloc(SIZE * sizeof(char) + 1)));
        if (!d)
        {
                return (0);
        }
        while (src[index])
        {
                dest[index] = src[index];
                index++;
        }
        dest[index] = '\0';
        return (dest);
}
