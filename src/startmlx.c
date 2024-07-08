/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startmlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:21:52 by mmaevani          #+#    #+#             */
/*   Updated: 2024/06/27 17:31:53 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	start_mlx(t_mlx **mlx_data)
{
	t_mlx	*data;

	*mlx_data = malloc(sizeof(t_mlx));
	data = *mlx_data;

	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, WINDOW_W, WINDOW_H, "fractol");
}
