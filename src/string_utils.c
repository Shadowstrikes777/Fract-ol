/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:32:31 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/19 12:49:21 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double ft_atof(const char *str) 
{
	double	result;
	double	factor;
	int		sign;
	int		i;

	result = 0.0;
	factor = 1.0;
	sign = 1;
	i = 0;
	if (str[i] == '-') 
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+') 
		i++;
	while (str[i] >= '0' && str[i] <= '9') 
	{
		result = result * 10.0 + (str[i] - '0');
		i++;
	}
	if (str[i] == '.') 
	{
		i++;
		factor = 0.1;
		while (str[i] >= '0' && str[i] <= '9') 
		{
			result += (str[i] - '0') * factor;
			factor *= 0.1;
			i++;
		}
	}
	return (result * sign);
}
