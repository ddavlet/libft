/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:27:32 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/15 12:44:39 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = 0;
	if (*s == (char)c)
		return ((char *)s);
	while (*s++)
	{
		if (*s == (char)c)
			ptr = (char *)s;
	}
	return (ptr);
}
