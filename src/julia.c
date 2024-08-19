/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:46:53 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/19 14:10:30 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_julia(t_fr *data)
{
	data->zoom = 1.0;
	data->max_iter = 500;
	data->r.min = -2.0;
	data->r.max = 2.0;
	data->i.min = -2.0;
	data->i.max = 2.0;
	data->shift_x = 0.0;
	data->shift_y = 0.0;
	data->window_w.min = 0;
	data->window_w.max = WINDOW_W - 1;
	data->window_h.min = 0;
	data->window_h.max = WINDOW_H - 1;
}

int	calc_julia(t_fr *data)
{
	int			i;
	t_complex	tmp;

	i = -1;
	data->z.r = data->z.r * data->zoom + data->shift_x;
	data->z.i = data->z.i * data->zoom + data->shift_y;
	while (data->z.r * data->z.r + data->z.i * data->z.i < 4 && ++i < data->max_iter)
	{
		tmp.r = data->z.r * data->z.r - data->z.i * data->z.i;
		tmp.i = 2 * data->z.r * data->z.i;
		data->z.r = tmp.r + data->c.r;
		data->z.i = tmp.i + data->c.i;
	}
	data->iter = i;
}