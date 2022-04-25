/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:09:11 by malord            #+#    #+#             */
/*   Updated: 2022/04/25 15:02:56 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_checkchar(char c, va_list argu)
{	
	int	len;

	if (c == 'c')
	{
		ft_putchar(va_arg(argu, int));
	}
	if (c == 's')
		ft_putstr(va_arg(argu, char *));
	if (c == 'd')
	{	
		len = ft_strlen(ft_itoa(va_arg(argu, int)));
		write (1, ft_itoa(va_arg(argu, int)), len);
	}
}
