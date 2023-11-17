/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:31:10 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/17 13:57:00 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	size_t	i;
	char	*ptr;

	i = ft_strlen(s);
	ptr = (char *)malloc((i +1) * sizeof(char));
	if (!ptr)
		return (0);
	return (ptr);
}
