/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:36:43 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/24 10:43:19 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Julia and mandelbrot
infinite zoom
Able to make command line args to disipline which fractal to render
Able to take command line args to shape Julia, i.e x y coordinates
ESC closes the process with no leaks
Click on the X window, closes the process leaks free
*/
#include "fractol.h"

int	main(int ac, char **av)
{
	t_fr	*data;
	
	check_errors(ac, av);
	start_mlx(&data);
	data->f_name = av[1];
	make_mandelbrot(data);
	mlx_key_hook(data->win, key_hook, data);
	mlx_hook(data->win, ONDESTROY, 0, ft_exit_mlx, &data);
	mlx_loop(data->mlx);
	return (0);
}

void	ft_draw_bg(t_fr *data)
{
	int	x;
	int y;

	x = 0;
	y = 0;
	while (y < WINDOW_H)
	{
		while (x < WINDOW_W)
		{
			my_mlx_pixel_put(data->img_ptr, x, y, BLUE);
			x++;
		}
		x = 0;
		y++;
	}
	mlx_put_image_to_window(data->mlx, data->win, data->img_ptr->img_ptr, 0, 0);
}
