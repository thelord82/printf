/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:16:15 by malord            #+#    #+#             */
/*   Updated: 2022/04/25 15:05:19 by malord           ###   ########.fr       */
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

void	ft_putchar(char c);
void	ft_checkchar(char c, va_list argu);
void	ft_putstr(char *s);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);

#endif