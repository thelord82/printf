/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:22:06 by malord            #+#    #+#             */
/*   Updated: 2022/04/20 16:10:49 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdarg.h>
#include <stdio.h>

char *ft_printf(const char *str, ...)
{
	va_list	args;
	va_start(args, str);
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_checkflag(str[i + 1]);
			i++;
		}
	}
}*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_putnbr.c"
 
void simple_printf(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
 
    while (*fmt != '\0') 
	{
        if (*fmt == '%') 
		{
            if (*(fmt + 1) == 'd')
			{
				int i = va_arg(args, int);
				ft_putnbr(i);
			}
        	else if (*(fmt + 1) == 'c') 
			{
            	int c = va_arg(args, int);
				write(1, &c, 1);
				write(1, "\n", 1);
			}
         	else if (*(fmt + 1) == 'f') 
			{
            	double d = va_arg(args, double);
            	printf("%f\n", d);
        	}
		}
        fmt++;
    }
    va_end(args);
}
int main(void)
{
    simple_printf("%d%c%f%f", 3, 'a', 1.999, 42.5); 
}
