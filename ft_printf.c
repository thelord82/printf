/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:22:06 by malord            #+#    #+#             */
/*   Updated: 2022/04/25 14:53:38 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_checkchar(*(str), args);
			str++;
		}
		else
			write (1, *(&str), 1);
		str++;
	}
	va_end(args);
	return (0);
}

int main()
{
	//char c = '3';
	//char d = '4';
	//char e = '5';
	//char f = '6';
	char str[] = "RECTUM !!!!!";
	printf("Printf OG : %s%d\n", str, 250);
	ft_printf("Je sais pas si ca marche hein? %s%d", str, 250);
}
