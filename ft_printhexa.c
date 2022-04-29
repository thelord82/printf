/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:04:46 by malord            #+#    #+#             */
/*   Updated: 2022/04/29 11:42:42 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Converts an int into its hexadecimal value
int	ft_printhexa(unsigned int n, char c)
{
	unsigned long	conv;
	char			*hexbase;
	int				len;

	len = ft_numlen(n, 16);
	conv = 0;
	hexbase = "0123456789abcdef";
	if (c == 'X')
		hexbase = "0123456789ABCDEF";
	if (n >= 16)
		ft_printhexa(n / 16, c);
	conv = hexbase[(n % 16)];
	write (1, &conv, 1);
	return (len);
}
