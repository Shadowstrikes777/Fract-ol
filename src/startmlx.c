/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startmlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananarivo. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:21:52 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 18:51:16 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	start_mlx(t_fr **data_ptr)
{
	t_fr	*data;

	data = (t_fr *) malloc(sizeof(t_fr));
	data->mlx = mlx_init();
	if (!data->mlx)
		ft_printf(INITERROR);
	data->win = mlx_new_window(data->mlx, WINDOW_W, WINDOW_H, "fractol");
	*data_ptr =  data;
	ft_init_img(data_ptr);
}
void	ft_init_img(t_fr **data)
{
	t_img *img;

	img = (t_img *) malloc(sizeof(t_img));
	img->img_ptr = mlx_new_image((*data)->mlx, WINDOW_W, WINDOW_H);
	img->addr = mlx_get_data_addr(img->img_ptr, &img->bits_per_pixel,
				&img->line_length, &img->endian);
	(*data)->img_ptr = img;
	if (!(*data)->img_ptr)
	{
		ft_printf(IMAGE_INIT_ERR);
		free((*data)->mlx);
		free(*data);
		exit(0);
	}
}
