/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 07:59:17 by malord            #+#    #+#             */
/*   Updated: 2022/04/27 10:53:15 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;

	len = ft_strlen(s);
	if (!s)
		return (0);
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
	return (len);
}
