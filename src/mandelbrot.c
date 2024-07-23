/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:46:32 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/24 02:33:55 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_mandel(t_fr *data)
{
	data->max_iter = 50;
	data->r.min = -2.0;
	data->r.max = 2.0;
	data->i.min = -1.5;
	data->i.max = 1.5;
}

int	calc_mandel(t_fr *data, t_complex c)
{
	t_complex	z;
	int			i;
	double		norm;

	i = -1;
	z = {0, 0};
	norm = 0;
	while (norm < 2 && ++i < data->max_iter)
	{
		z = add_c(&mul_c(&z, &z), &c);
		norm = norm_c(z);
	}
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

	init_mandel(data);
	x = -1;
	while (++x < WINDOW_W)
	{
		y = -1;
		while (++y < WINDOW_H)
		{
			c.r = scale(x, data->r, data->window);
			c.i = scale(y, data->i, data->window);
			if (calc_mandel(data, c) == FALSE)
				my_mlx_pixel_put(data->img_ptr, x, y, RED);
			else
				my_mlx_pixel_put(data->img_ptr, x, y, BLACK);
		}
	}
	mlx_put_image_to_window(data->mlx, data->win, data->img_ptr->img_ptr, 0, 0);
}