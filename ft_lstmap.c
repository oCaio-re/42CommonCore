/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 01:47:30 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/10/26 01:47:33 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_head(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	cont = f(lst->content);
	newlst = ft_lstnew(cont);
	if (!newlst)
	{
		del(cont);
		return (NULL);
	}
	return (newlst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*newlst;
	void	*cont;

	head = ft_head(lst, f, del);
	if (!head)
		return (NULL);
	newlst = head;
	lst = lst->next;
	while (lst)
	{
		cont = f(lst->content);
		newlst->next = ft_lstnew(cont);
		if (!newlst->next)
		{
			del(cont);
			ft_lstclear(&head, del);
			return (NULL);
		}
		newlst = newlst->next;
		newlst->next = NULL;
		lst = lst->next;
	}
	return (head);
}
