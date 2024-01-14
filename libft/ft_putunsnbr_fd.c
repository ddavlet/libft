/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:08:11 by ddavlety          #+#    #+#             */
/*   Updated: 2024/01/11 09:08:54 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsnbr_fd(unsigned int n, int fd)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_putunsnbr_fd(n / 10, fd);
	i += ft_putchar_pf(n % 10 + 48, fd);
	return (i);
}
