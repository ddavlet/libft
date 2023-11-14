/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:16:29 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/14 16:01:26 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(dst);
	// k = ft_strlen(src);
	k = 0;
	while (src[k])
	{
		k++;
	}
	j = 0;
	while (size > 0 && (i - 1) > j)
	{
		*dst++ = *src++;
		j++;
		size--;
	}
	*dst = '\0';
	return (k);
}
