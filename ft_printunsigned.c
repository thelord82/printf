/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:26:43 by malord            #+#    #+#             */
/*   Updated: 2022/04/29 12:32:09 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Prints the unsigned int argument called by the 'u' specifier
int	ft_printunsigned(unsigned int n)
{
	int	len;

	len = ft_numlen(n, 10);
	if (n < 0)
		n += (4294967295 + 1);
	if (n >= 10)
		ft_printunsigned(n / 10);
	n = n % 10 + 48;
	write(1, &n, 1);
	return (len);
}
