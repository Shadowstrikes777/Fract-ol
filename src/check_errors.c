/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:35:56 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/06 11:57:58 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_printparameters()
{
	ft_printf("Avalaible fractals are :\n");
	ft_printf("_julia\n_mandelbrot\n");
}

void	check_errors(int ac, char **av)
{
	if (2 == ac && (ft_strncmp(av[1], "julia", 5)
		|| ft_strncmp(av[1], "mandelbrot", 10)))
		return ;
	else
	{
		perror(ERRMSG0);
		ft_printparameters();
		exit(EXIT_FAILURE);
	}
}
