/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:40:26 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/18 17:59:45 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int key_hook(int keycode, t_fr *data)
{
	if (XK_Escape == keycode)
	{
		ft_exit_mlx(&data);
		return (0);
	}
	else if (XK_Right == keycode)
		data->shift_x += 0.5;
	else if (XK_Left == keycode)
		data->shift_x -= 0.5;
	else if (XK_Up == keycode)
		data->shift_y += 0.5;
	else if (XK_Down == keycode)
		data->shift_y -= 0.5;
	render(data);
}

int	mouse_hook(int keycode, int x, int y, t_fr *data)
{
	if (Button4 == keycode)
		data->zoom /= 1.1;
	else if (Button5 == keycode)
		data->zoom *= 1.1;
	render(data);
}

int	ft_exit_mlx(t_fr **data)
{
	if ((*data)->img_ptr->img_ptr != NULL)
		mlx_destroy_image((*data)->mlx, (*data)->img_ptr->img_ptr);
	if ((*data)->win != NULL)
		mlx_destroy_window((*data)->mlx, (*data)->win);
	if ((*data)->mlx != NULL)
		mlx_destroy_display((*data)->mlx);
	free((*data)->mlx);
	free((*data)->img_ptr);
	free(*data);
	exit(0);
	return (0);
}
