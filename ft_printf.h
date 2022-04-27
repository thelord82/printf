/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:16:15 by malord            #+#    #+#             */
/*   Updated: 2022/04/27 17:25:00 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <string.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft.h"

int				ft_putchar(char c);
int				ft_checkchar(char c, va_list argu);
int				ft_numlen(unsigned int nbr);
int				ft_putstr(char *s);
int				ft_printptr(va_list ptr);
int				ft_putnbr(int n);
int				ft_printunsigned(unsigned int n);
int				ft_printhexa(unsigned int n, char c);
int				ft_printf(const char *str, ...);

#endif