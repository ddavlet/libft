/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:47:21 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/13 17:02:36 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c >= '\t' && c <= '\r') || c == ' ')
		return (1);
	else
		return (0);
}

int	check_beyond_int(int nbr, char n, int sign)
{
	if (sign == 1)
		if (nbr > INT_MAX / 10 || (nbr == INT_MAX / 10 && n - '0' > INT_MAX % 10))
			return (1);
	if (sign == -1)
		if (nbr > -(INT_MIN / 10) || (nbr ==  -(INT_MIN / 10) && n - '0' > INT_MIN % 10))
			return (2);
	return(0);
}

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	while (ft_isspace(*nptr) != 0)
	{
		nptr++;
	}
	if (*nptr == '-')
	{
		sign *= -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		if (check_beyond_int(nbr, *nptr, sign) == 1)
			return (INT_MAX);
		else if (check_beyond_int(nbr, *nptr, sign) == 2)
			return (INT_MIN);
		nbr = nbr * 10 + (int)(*nptr - '0');
		nptr++;
	}
	return (nbr * sign);
}
