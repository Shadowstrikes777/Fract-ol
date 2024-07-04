/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:36:43 by mmaevani          #+#    #+#             */
/*   Updated: 2024/06/03 14:36:09 by mmaevani         ###   ########.fr       */
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
int	main(int argc, char **argv)
{
	t_mlx	*mlx_data;
	t_img	*img_data;

	start_mlx(&mlx_data, &img_data);
	mlx_key_hook(mlx_data->win, key_hook, mlx_data);
	mlx_loop(mlx_data->mlx);
	return (0);
}