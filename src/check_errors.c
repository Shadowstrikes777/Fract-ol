/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:35:56 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/15 17:28:59 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_printparameters()
{
	ft_printf("lack of arguments or wrong arguments\n");
	ft_printf("Avalaible fractals are :\n");
	ft_printf("_julia\n_mandelbrot\n");
}

void    check_args(int ac, char **av, t_fr **data)
{
	if (ac >= 2 && (ft_strncmp(av[1], "mandelbrot", 10) == 0 || ft_strncmp(av[1], "julia", 5) == 0))
	{
		init_data(data);
		(*data)->f_name = av[1];
	}
	else
	{
		ft_printparameters();
		exit(EXIT_FAILURE);
	}
}
