/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:55:00 by mmaevani          #+#    #+#             */
/*   Updated: 2024/03/12 18:01:58 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrbase(int n, const char *base)
{
	long long	nbr;
	int			count;
	int			basen;
	char		c;

	nbr = n;
	count = 0;
	basen = ft_strlen(base);
	if (nbr < 0)
	{
		count += write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr / basen != 0)
		count += ft_putnbrbase(nbr / basen, base);
	c = base[nbr % basen];
	count += ft_putchar(c);
	return (count);
}
/*
int	main(void)
{
	ft_putnbrbase(255,"0123456789abcdef");
	return (0);
}
*/