/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:27:32 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/20 12:17:23 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned cha	j;

	j = (unsigned char)c;
	i = ft_strlen(s);
	while (i + 1)
	{
		if (s[i] == j)
			return ((char *)&s[i]);
		i--;
	}
	return (0)
}
