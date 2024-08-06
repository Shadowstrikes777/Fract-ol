/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_basic.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:06:55 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/06 12:00:05 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_BASICS_H
# define MLX_BASICS_H
# include "libft.h"
# include "mlx.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <math.h>
# include <stdio.h>
# define ONDESTROY 17
# define INITERROR "error on mlx init\n"
# define IMAGE_INIT_ERR "error on image init\n"

typedef struct s_pos
{
	int		x;
	int		y;
}			t_pos;

typedef struct s_range
{
	int		min;
	int		max;
}			t_range;

typedef struct s_img
{
	void	*img_ptr;
	char	*addr;
	t_pos	pos;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}			t_img;

typedef struct s_complex
{
	double	r;
	double	i;
}			t_complex;

typedef struct s_fr
{
	void		*mlx;
	void		*win;
	t_img		*img_ptr;
	char		*f_name;
	double		zoom;
	double		shift_x;
	double		shift_y;
	__u_int		max_iter;
	__u_int		iter;
	t_complex	c;
	t_complex	z;
	t_range		r;
	t_range		i;
	t_range		window_w;
	t_range		window_h;
}			t_fr;

void		ft_init_img(t_fr **data);
void		my_mlx_pixel_put(t_img *data, int x, int y, int color);
void		start_mlx(t_fr **mlx_data);
int			key_hook(int keycode, t_fr *data);
int			ft_exit_mlx(t_fr **data);
int			mouse_hook(int keycode, int x, int y, t_fr *data);
#endif