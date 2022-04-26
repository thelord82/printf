/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:16:15 by malord            #+#    #+#             */
/*   Updated: 2022/04/26 15:32:21 by malord           ###   ########.fr       */
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
void	ft_putnbr(int n);
void	ft_printunsigned(unsigned int n);
void	ft_printhexa(int n, char c);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_printptr(int n);

#endif