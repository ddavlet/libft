/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:30:24 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/19 13:34:18 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	if (len <= 0 || ft_strlen(s) <= start)
	{
		ptr = (char *)malloc(1 * sizeof(char));
		*ptr = '\0';
		return (ptr);
	}
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (s[start] && len > 0)
	{
		ptr[i++] = s[start++];
		len--;
	}
	ptr[i] = '\0';
	return (ptr);
}
