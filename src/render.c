/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 07:59:19 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/18 17:07:58 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	render(t_fr *data)
{
	mlx_clear_window(data->mlx, data->win);
	data->x = -1;
	while (++data->x < WINDOW_H)
	{
		data->y = -1;
		while(++data->y < WINDOW_W)
			handlepixel(data);
	}
	mlx_put_image_to_window(data->mlx, data->win, data->img_ptr->img_ptr, 0, 0);
}

void	handlepixel(t_fr *data)
{
	t_complex	c;

	c.r = (data->r.min + (double)data->x * (data->r.max - data->r.min) / WINDOW_W);
	c.i = (data->i.max + (double)data->y * (data->i.min - data->i.max) / WINDOW_H );
	if (data->id == MANDELBROT)
		calc_mandel(data, c);
}