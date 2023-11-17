/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:02:00 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/14 15:15:27 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpy(unsigned char *ptr_dest,
					unsigned char *ptr_src, size_t i, size_t n)
{
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
}

static void	ft_cpy_reverse(unsigned char *ptr_dest,
							unsigned char *ptr_src, size_t n)
{
	while (n > 0)
	{
		n--;
		ptr_dest[n] = ptr_src[n];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (ptr_dest < ptr_src)
		ft_cpy(ptr_dest, ptr_src, i, n);
	else
		ft_cpy_reverse(ptr_dest, ptr_src, n);
	return (dest);
}
