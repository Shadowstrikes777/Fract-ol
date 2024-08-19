/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:35:56 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/19 11:56:45 by mmaevani         ###   ########.fr       */
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
	if (ac >= 2)
	{
		if (ft_strncmp(av[1], "mandelbrot", 10) == 0)
		{
			init_data(data);
			(*data)->id = MANDELBROT;
		}	
		if (ft_strncmp(av[1], "julia", 5) == 0 && ac == 4)
		{
			init_data(data);
			(*data)->id = JULIA;
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
		check_julia_args(av, data);
		(*data)->c.r = ft_atof(av[2]);
		(*data)->c.i = ft_atof(av[3]);
	}
}

void check_julia_args(char **av, t_fr **data)
{
	int i;
	int j;
	int has_dot;
	
	has_dot = 0;
	j = 2;
	while (av[j])
	{
		i = 0;
		if (av[j][i] == '-' || av[j][i] == '+')
			i++;
		while (av[j][i])
		{
			if (!ft_isdigit(av[j][i]))
			{
				if (av[j][i] == '.' && !has_dot)
					has_dot = 1;
				else
				{
					printf("Error: argument must be a double\n");
					ft_exit_mlx(data);
					exit(EXIT_FAILURE);
				}
			}
			i++;
		}
		j++;
	}
}