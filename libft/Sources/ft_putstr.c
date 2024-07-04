/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:01:30 by mmaevani          #+#    #+#             */
/*   Updated: 2024/06/24 11:06:04 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(const char *s)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!s)
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	while (s[i])
	{
		count += write(1, &s[i], 1);
		i++;
	}
	return (count);
}
