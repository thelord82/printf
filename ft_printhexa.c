/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:04:46 by malord            #+#    #+#             */
/*   Updated: 2022/04/27 17:32:31 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*int	ft_printhexa(int n, char c)
{
	char	*hexconv;
	char	*hexbase;
	int		i;

	i = 0;
	hexbase = "0123456789abcdef";
	if (c == 'X')
		hexbase = "0123456789ABCDEF";
	hexconv = ft_calloc(ft_numlen(n), sizeof(char));
	if (!hexconv)
		return (0);
	while (n > 0)
	{
		hexconv[i++] = hexbase[n % 16];
		n /= 16;
	}
	while (i-- >= 0)
		write (1, &hexconv[i], 1);
	free(hexconv);
	return (ft_strlen(hexconv));
}*/
int	ft_printhexa(unsigned int n, char c)
{
	unsigned long	conv;
	char			*hexbase;
	int				len;

	len = ft_numlen(n);
	conv = 0;
	if (n < 0)
		n += (4294967295 + n);
	hexbase = "0123456789abcdef";
	if (c == 'X')
		hexbase = "0123456789ABCDEF";
	if (n >= 16)
		ft_printhexa(n / 16, c);
	conv = hexbase[(n % 16)];
	write (1, &conv, 1);
	return (len);
}
