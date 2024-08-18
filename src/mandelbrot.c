/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:46:32 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/18 17:55:33 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_mandel(t_fr *data)
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

int	calc_mandel(t_fr *data, t_complex c)
{
	t_complex	z;
	t_complex	tmp;
	int			i;
	double		norm;

	i = -1;
	z.r = 0;
	z.i = 0;
	c.r = c.r * data->zoom + data->shift_x;
	c.i = c.i * data->zoom + data->shift_y;
	while (z.r * z.r + z.i * z.i < 4 && ++i < data->max_iter)
	{
		tmp.r = z.r * z.r - z.i * z.i;
    	tmp.i = 2 * z.r * z.i;
		z.r = tmp.r + c.r;
		z.i = tmp.i + c.i;
	}
	data->iter = i;
	if (i == data->max_iter)
		my_mlx_pixel_put(data->img_ptr, data->x, data->y, BLACK);
	else
		my_mlx_pixel_put(data->img_ptr, data->x, data->y, (BRITISH * (i % 255)));
}

