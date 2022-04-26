/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:04:46 by malord            #+#    #+#             */
/*   Updated: 2022/04/26 15:17:49 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"

static int	tab_length(int nbr)
{
	int	i;

	i = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

void	ft_printhexa(int n, char c)
{
	char	*hexconv;
	char	*hexbase;
	int		i;
	int		val;

	i = 0;
	hexbase = "0123456789abcdef";
	if (c == 'X')
		hexbase = "0123456789ABCDEF";
	hexconv = ft_calloc(tab_length(n), sizeof(char));
	if (!hexconv)
		return ;
	while (n > 0)
	{
		val = n % 16;
		hexconv[i++] = hexbase[val];
		n /= 16;
	}
	while (i-- >= 0)
		write (1, &hexconv[i], 1);
	free(hexconv);
}
