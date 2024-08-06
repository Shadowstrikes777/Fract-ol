/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:46:32 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/05 19:11:26 by mmaevani         ###   ########.fr       */
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
	norm = 0;
	while (norm < 4 && ++i < data->max_iter)
	{
		tmp = mul_c(&z, &z);
		z = add_c(&tmp, &c);
		norm = norm_c_squarred(z);
	}
	data->iter = i;
	if (i == data->max_iter)
		return (TRUE);
	else
		return (FALSE);
}

double	scale(double value, t_range source, t_range cible)
{
	double	result;

	result = cible.min + (cible.max - cible.min) * (value - source.min) / (source.max - source.min);
	return (result);
}

void	make_mandelbrot(t_fr *data)
{
	int			x;
	int			y;
	t_complex	c;

	x = -1;
	while (++x < WINDOW_W)
	{
		y = -1;
		while (++y < WINDOW_H)
		{
			int tmp;
			c.r = scale(x, data->window_w, data->r) + data->shift_x;
			c.i = scale(y, data->window_h, data->i);
			if (calc_mandel(data, c) == TRUE)
				my_mlx_pixel_put(data->img_ptr, x, y, BLACK);
			else
				my_mlx_pixel_put(data->img_ptr, x, y, BLUE);
		}
	}
	mlx_put_image_to_window(data->mlx, data->win, data->img_ptr->img_ptr, 0, 0);
}