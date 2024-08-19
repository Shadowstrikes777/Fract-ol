/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:35:56 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/19 14:47:59 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_printparameters()
{
	ft_putendl("Usage :");
	ft_putendl("./fractol [name of the fractal]");
	ft_putendl("exemple :");
	ft_putendl("./fractol mandelbrot or ./fractol julia [cx] [cy]");
}

void    check_args(int ac, char **av, t_fr **data)
{
	if (ac >= 2 && ac != 3)
	{
		if (ft_strncmp(av[1], "mandelbrot", 10) == 0)
		{
			init_data(data);
			(*data)->id = MANDELBROT;
		}	
		if (ft_strncmp(av[1], "julia", 5) == 0)
		{
			init_data(data);
			(*data)->id = JULIA;
			if (ac == 2)
			{
				(*data)->c.r = -0.7;
				(*data)->c.i = 0.27015;
				return ;
			}
			parse_args(av, data);
		}
	}
	else
	{
		ft_printparameters();
		exit(EXIT_FAILURE);
	}
}

void	ft_putendl(char *str)
{
	ft_putendl_fd(str, 1);
}

void	parse_args(char **av, t_fr **data)
{
	if ((*data)->id != JULIA)
		return ;
	else
	{
		if (!ft_strchr(av[2], '.'))
			ft_printparameters();
		if (!ft_strchr(av[3], '.'))
			ft_printparameters();
		(*data)->c.r = ft_atof(av[2]);
		(*data)->c.i = ft_atof(av[3]);
		if ((*data)->c.r > 2 || (*data)->c.r < -2 || (*data)->c.i > 2 || (*data)->c.i < -2)
			ft_printparameters();
	}
}
