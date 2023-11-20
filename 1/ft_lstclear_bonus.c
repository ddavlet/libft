/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:23:09 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/20 10:23:09 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

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
