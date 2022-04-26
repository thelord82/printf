/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:22:06 by malord            #+#    #+#             */
/*   Updated: 2022/04/26 15:46:27 by malord           ###   ########.fr       */
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
			//str++;
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
	//int x = 50;
   	//int *ptr = &x;
	char c = '3';
	//char d = '4';
	//char e = '5';
	//char f = '6';
	//char str[] = "Je sais pas si ca marche hein? ";
	char str2[] = "RECTUM !!!!!";
	//printf("Printf OG : 632414 est %x %X\n", -2, 2147483647);
   	//printf("The address is: %p, the value is %d\n", ptr, *ptr);
	printf("PRINTF OG : Le caractere est %c, la phrase est %s, les nombres sont %d, %i, %u, %x et %X\n", c, str2, 150, -399, 218, 632414, 150);
	ft_printf("MON PRINTF: Le caractere est %c, la phrase est %s, les nombres sont %d, %i, %u, %x et %X\n", c, str2, 150, -399, 218, 632414, 150);
}
