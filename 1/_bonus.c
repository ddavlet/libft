/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _bonus.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:41:28 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/20 00:46:08 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

int ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return	(i);
}

t_list *ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(lst);
	last->next = new;
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst);
	free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	unsigned int	i;

	i = 0;
	while (lst[i] != NULL)
	{
		ft_lstdelone(lst[i], del);
		i++;
	}
	*lst = NULL;
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	tmp = lst;
	while (tmp)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(f(tmp->content)));
		if (!ft_lstlast(new_lst))
			ft_lstdelone(ft_lstlast(new_lst), del);
		tmp = tmp->next;
	}
	return (new_lst);
}
