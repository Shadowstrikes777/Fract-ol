/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:31:14 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/24 01:45:42 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_complex	add_c(t_complex *zi, t_complex *z2)
{
	t_complex	result;

	result.r = zi->r + z2->r;
	result.i = zi->i + z2->i;
	return (result);
}

t_complex	mul_c(t_complex *zi, t_complex *z2)
{
	t_complex	result;

	result.r = zi->r * z2->r - zi->i * z2->i;
	result.i = zi->r * z2->i + zi->i * z2->r;
	return (result);
}

double	norm_c(t_complex z)
{
	return sqrt(z.r * z.r + z.i * z.i);
}
