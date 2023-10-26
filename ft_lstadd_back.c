/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 01:45:08 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/26 01:45:10 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*helper;

	helper = *lst;
	if (helper == NULL)
	{
		*lst = new;
		return ;
	}
	while (helper->next != NULL)
	{
		helper = helper->next;
	}
	helper->next = new;
}
