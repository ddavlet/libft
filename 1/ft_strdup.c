/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdrup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:31:10 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/15 16:35:38 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
