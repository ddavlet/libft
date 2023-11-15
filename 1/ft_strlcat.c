/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:15:31 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/15 10:11:35 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*dst)
	{
		dst++;
		i++;
	}
	while ((size - 1) > i && *src)
	{
		*dst++ = *src++;
		i++;
	}
	while (*src)
	{
		i++;
		src++;
	}
	*dst = '\0';
	return (i);
}
