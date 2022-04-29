/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:09:11 by malord            #+#    #+#             */
/*   Updated: 2022/04/29 12:43:04 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Checks the specifier following the % character
int	ft_checkchar(char c, va_list argu)
{	
	int	len;

	if (c == 'c')
		len = ft_putchar(va_arg(argu, int));
	if (c == 's')
		len = ft_putstr(va_arg(argu, char *));
	if (c == 'd' || c == 'i')
		len = ft_putnbr(va_arg(argu, int));
	if (c == 'u')
		len = ft_printunsigned(va_arg(argu, int));
	if (c == '%')
		len = ft_putchar(c);
	if (c == 'X' || c == 'x')
		len = ft_printhexa(va_arg(argu, unsigned int), c);
	if (c == 'p')
		len = ft_printptr(argu);
	return (len);
}
