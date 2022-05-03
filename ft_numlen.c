/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:30:40 by malord            #+#    #+#             */
/*   Updated: 2022/05/03 08:19:26 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Returns the length of a number, including the '-' sign if necessary. 
Takes the base in parameter. */
int	ft_numlen(long nbr, long base)
{
	long	i;

	i = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	while (nbr >= base)
	{
		nbr /= base;
		i++;
	}
	return (i);
}
