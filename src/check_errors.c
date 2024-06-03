/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:35:56 by mmaevani          #+#    #+#             */
/*   Updated: 2024/06/03 15:18:52 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_printparameters()
{
	ft_printf("Options :\n");
	ft_printf("");
}

void	check_errors(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_printf("\e[0;31m error Usage : ./fractol [fractal name]\n\033[0m");
	}
}
