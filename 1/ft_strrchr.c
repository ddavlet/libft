/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:27:32 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/19 17:21:39 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	ch;
	unsigned int	i;

	ch = (char)c;
	ptr = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			ptr = (char *)&s[i];
		i++;
	}
	if (s[i] == ch)
		ptr = (char *)&s[i];
	return (ptr);
}
