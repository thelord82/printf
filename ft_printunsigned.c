/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:26:43 by malord            #+#    #+#             */
/*   Updated: 2022/04/27 12:51:48 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int n)
{
	int	len;

	len = ft_numlen(n);
	if (n < 0)
		n += (4294967295 + 1);
	if (n >= 10)
		ft_printunsigned(n / 10);
	n = n % 10 + 48;
	write(1, &n, 1);
	return (len);
}
