/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:15:32 by mmaevani          #+#    #+#             */
/*   Updated: 2024/06/03 13:57:01 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define CONVC "cspdiuxX%"
# define BASE10 "0123456789"
# define BASE16 "0123456789abcdef"
# define BASE16M "0123456789ABCDEF"

int	ft_printf(const char *s, ...);
int	ft_putstr(const char *s);
int	ft_ptr(void *ptr);
int	ft_putnbrbase(int n, const char *base);
int	ft_puthex(unsigned long long n, const char *base);
int	ft_putchar(int c);
#endif
