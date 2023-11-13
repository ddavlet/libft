/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:45:26 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/13 17:02:35 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (c);
	else
		return (0);
}

int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (c);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) != 0 || ft_isupper(c) != 0)
		return (c);
	else
		return (0);
}
