/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:22:06 by malord            #+#    #+#             */
/*   Updated: 2022/04/27 17:33:24 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int main()
{
	//int x = 50;
   	//int ptr = &x;
	//char c = '3';
	//char d = '4';
	//char e = '5';
	//char f = '6';
	//char str[] = "Je sais pas si ca marche hein? ";
	//char str2[] = "RECTUM !!!!!";
	//printf("Printf OG : 632414 est %x %X\n", -2, 2147483647);
   	//printf("The address is: %p\n", &x);
	//printf("PRINTF OG  : Le caractere est %c, la phrase est %s, les nombres sont %d, %i, %u, %x et %X et le pointeur est %p\n et ne pas oublier le %%\n", c, str2, 150, -399, 218, 632414, 150, &x);
	//printf("%d\n", printf("%d\n", -2300000));
	//ft_printf("%d\n", ft_printf("%d\n", -2300000));
	//ft_printf("L'adresse du pointeur est %p\n", &x);
	//ft_printf("MON PRINTF : Le caractere est %c, la phrase est %s, les nombres sont %d, %i, %u, %x et %X et le pointeur est %p\n et ne pas oublier le %%\n", c, str2, 150, -399, 218, 632414, 150, &x);
	//printf("Printf OG : %X\n", 15);
	//ft_printf("Mon PrintF : %X\n", 15);
	printf("%d\n", printf("%u\n", -9));
	ft_printf("%d\n", ft_printf("%u\n", -9));
}
