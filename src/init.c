/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 20:50:13 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/06 12:10:33 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_fr(t_fr *data, char **av)
{
	data->f_name = av[1];
	printf("%s\n", data->f_name);
	if (!(ft_strncmp(data->f_name, MANDELBROT, 10)))
	{
		init_mandel(data);
		make_mandelbrot(data);
	}
	else
	{
		perror(ERRMSG0);
		ft_printparameters();
		exit(EXIT_FAILURE);
	}
	return ;
}