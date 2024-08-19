/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 20:50:13 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/19 13:46:36 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_fr(t_fr *data, char **av)
{
	if (data->id == MANDELBROT)
	{
		ft_printf("rendering mandelbrot");
		init_mandel(data);
		render(data);
	}
	else if (data->id == JULIA)
	{
		// todo
		ft_printf("rendering julia");
		init_julia(data);
	}
	else
	{
		perror(ERRMSG0);
		ft_printparameters();
		exit(EXIT_FAILURE);
	}
	return ;
}

void	init_data(t_fr **data_ptr)
{
	t_fr *data;
	
	*data_ptr = (t_fr *) malloc(sizeof(t_fr));
	mallocerror(*data_ptr);
	data = *data_ptr;
	data->id = -1;
	data->mlx = NULL;
	data->win = NULL;
	data->img_ptr = NULL;
	data->zoom = 1.0;
	data->max_iter = 500;
	data->r.min = 0.0;
	data->r.max = 0.0;
	data->i.min = 0.0;
	data->i.max = 0.0;
	data->shift_x = 0.0;
	data->shift_y = 0.0;
	data->window_w.min = 0;
	data->window_w.max = WINDOW_W - 1;
	data->window_h.min = 0;
	data->window_h.max = WINDOW_H - 1;
}

void	init_events(t_fr *data)
{
	mlx_hook(data->win, KeyPress, KeyPressMask, key_hook, data);
	mlx_hook(data->win, ButtonPress, ButtonPressMask, mouse_hook, data);
	mlx_hook(data->win, ONDESTROY, StructureNotifyMask, ft_exit_mlx, &data);
	mlx_loop(data->mlx);
}

void	mallocerror(void *ptr)
{
	if (ptr == NULL)
	{
		write(1, "Error: failed to allocate memory.\n", 34);
		exit(EXIT_FAILURE);
	}
}
