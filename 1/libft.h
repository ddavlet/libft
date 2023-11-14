/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:27:43 by ddavlety          #+#    #+#             */
/*   Updated: 2023/11/14 19:31:15 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int			ft_isalpha(int c);

int			ft_isdigit(int c);

int			ft_isalnum(int c);

int			ft_isascii(int c);

int			ft_isprint(char c);

size_t		ft_strlen(const char *s);

void		*ft_memset(void *s, int c, unsigned long n);

void		ft_bzero(void *s, unsigned long n);

void		*ft_memset(void *s, int c, unsigned long n);

void		*ft_memcpy(void *dest, const void *src, unsigned long n);

void		*ft_memmove(void *dest, const void *src, size_t n);

size_t		ft_strlcpy(char *dst, const char *src, size_t size);

size_t		ft_strlcat(char *dst, const char *src, size_t size);

int			ft_atoi(const char *nptr);

#endif
