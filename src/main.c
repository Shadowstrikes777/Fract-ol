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

int	main(int ac, char **av)
{
	t_mlx	*mlx_data;

	check_errors(ac, av);
	start_mlx(&mlx_data);
	mlx_key_hook(mlx_data->win, key_hook, mlx_data);
	mlx_hook(mlx_data->win, ONDESTROY, 0, ft_exit_mlx, mlx_data);
	mlx_loop(mlx_data->mlx);
	return (0);
}
// check arguments if julia and mandelbrot then it s ok else exit with error