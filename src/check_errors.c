/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananarivo. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:35:56 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 18:52:04 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_printparameters()
{
	ft_printf("Avalaible fractals are :\n");
	ft_printf("_julia\n_mandelbrot\n");
}
void	ft_perror(char *str)
{
	ft_putstr_fd(str, 2);
	ft_putstr_fd("\n", 2);
}
void	check_errors(int ac, char **av)
{
	if ( 2 == ac && (ft_strncmp(av[1], "julia", 5)
		|| ft_strncmp(av[1], "mandelbrot", 10)))
		return ;
	else
	{
		ft_perror(ERRMSG0);
		ft_printparameters();
		exit(EXIT_FAILURE);
	}
}
