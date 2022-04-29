/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:31:19 by malord            #+#    #+#             */
/*   Updated: 2022/04/29 12:31:32 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Prints the void* in hexadecimal form
static void	ft_printhexptr(unsigned long nb, int *len, char *base)
{
	if (nb >= 16)
		ft_printhexptr((nb / 16), len, base);
	write(1, &base[nb % 16], 1);
	*len += 1;
}

/*Takes the va_arg argument and calls the print function to write in hex form, 
also adds '0x' in front of it*/
int	ft_printptr(va_list ptr)
{
	int				len;
	unsigned long	adr;

	adr = (unsigned long)va_arg(ptr, void *);
	len = 2;
	write(1, "0x", 2);
	ft_printhexptr(adr, &len, "0123456789abcdef");
	return (len);
}
