/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:38:23 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/17 17:03:24 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_counter(int n)
{
	int	i;

	i = 1;
	if (n == INT_MIN)
		return (11);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n >= 10)
		i += ft_counter (n / 10);
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		bytes;

	bytes = ft_counter(n);
	ptr = (char *)malloc((bytes + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ptr[bytes--] = '\0';
	while (n != 0)
	{
		ptr[bytes] = n % 10 + 48;
		if (bytes == 0)
			break ;
		bytes--;
		n /= 10;
	}
	if (n < 0)
		ptr[bytes] = '-';
	return (ptr);
}
