/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:09:11 by malord            #+#    #+#             */
/*   Updated: 2022/04/26 15:44:57 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_checkchar(char c, va_list argu)
{	
	//int	len;

	if (c == 'c')
		ft_putchar(va_arg(argu, int));
	if (c == 's')
		ft_putstr(va_arg(argu, char *));
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(argu, int));
	if (c == 'u')
		ft_printunsigned(va_arg(argu, int));
	if (c == '%')
		ft_putchar(c);
	if (c == 'X' || c == 'x')
		ft_printhexa(va_arg(argu, int), c);
	//if (c == 'p')
	//	ft_printptr(va_arg(argu, int));
}
