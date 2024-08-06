/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:20:20 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/05 19:20:24 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_mlx_pixel_put(t_img *data, int x, int y, int color)
{
	char	*dst;

	if (x < 0 || y < 0 || x >= WINDOW_W || y >= WINDOW_H)
		return ;
	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

int key_hook(int keycode, t_fr *data)
{
	if (XK_Escape == keycode)
	{
		ft_exit_mlx(&data);
		return (0);
	}
	else if (XK_Right == keycode)
		data->shift_x += 0.5;
	else if (XK_Left == keycode)
		data->shift_x -= 0.5;
	else if (XK_KP_Add == keycode)
	{
		data->max_iter += 10;
		printf("%d\n", data->max_iter);
	}
	else if (XK_KP_Subtract == keycode)
		data->max_iter -= 50;
	make_mandelbrot(data);
}

int	mouse_hook(int keycode, int x, int y, t_fr *data)
{
	if (Button4 == keycode)
	{
		data->zoom *= 1.1;
	}
	else if (Button5 == keycode)
	{
		data->zoom /= 1.1;
	}
}

int	ft_exit_mlx(t_fr **data)
{
	if ((*data)->img_ptr->img_ptr != NULL)
		mlx_destroy_image((*data)->mlx, (*data)->img_ptr->img_ptr);
	if ((*data)->win != NULL)
		mlx_destroy_window((*data)->mlx, (*data)->win);
	if ((*data)->mlx != NULL)
		mlx_destroy_display((*data)->mlx);
	free((*data)->mlx);
	free((*data)->img_ptr);
	free(*data);
	exit(0);
	return (0);
}
