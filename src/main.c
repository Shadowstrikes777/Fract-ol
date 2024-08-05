/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:36:43 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/25 15:11:47 by mmaevani         ###   ########.fr       */
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
	init_fr(data, av);
	mlx_key_hook(data->win, key_hook, data);
	mlx_mouse_hook(data->win, mouse_hook, data);
	mlx_hook(data->win, ONDESTROY, 0, ft_exit_mlx, &data);
	mlx_loop(data->mlx);
	return (0);
}

