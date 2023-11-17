/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:01:23 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/17 16:38:08 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_counter(char const *s, char c)
{
	unsigned int	i;

	i = 1;
	while (*s)
	{
		if (*s == c)
			i++;
	}
	return (i);
}

void	ft_free_all(char **ptr)
{
	while (*ptr)
		free(*ptr);
	free (*ptr);
	free (ptr);
}

unsigned int	ft_count_len(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		word;

	if (!s)
		return (0);
	word = 0;
	split = (char **)malloc((ft_counter(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	split[ft_counter(s, c)] = '\0';
	while (*s)
	{
		if (s == c)
		{
			split[word] = ft_substr(s + 1, 0, ft_count_len(s + 1, c));
			if (!split[word])
				ft_free_all(split);
			word++;
		}
		s++;
	}
}
