/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:22:06 by malord            #+#    #+#             */
/*   Updated: 2022/05/03 15:51:03 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Prints dec, int, hexa, char*, char, unsigned, ptr adresses and manages % sign
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += ft_checkchar(*(str), args);
		}
		else
		{
			write (1, *(&str), 1);
			len++;
		}
		str++;
	}
	va_end(args);
	return (len);
}
