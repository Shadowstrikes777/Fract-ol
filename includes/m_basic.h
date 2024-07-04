/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_basic.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:06:55 by mmaevani          #+#    #+#             */
/*   Updated: 2024/06/27 19:38:08 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_BASICS_H
# define MLX_BASICS_H
# include "mlx.h"
# include "libft.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <math.h>

typedef struct s_pos
{
	int	x;
	int	y;
}	t_pos;

typedef struct	s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_img;

typedef struct s_mlx {
	void	*mlx;
	void	*win;
}	t_mlx;

typedef struct s_rect {
	t_pos	pos;		/* You can initialize like this: */
	t_pos	size;		/* struct s_rect my_rect = { {10, 20}, {30, 40} }; */
} t_rect ;

void	my_mlx_pixel_put(t_img *data, int x, int y, int color);
void	start_mlx(t_mlx **mlx_data, t_img **img_data);
int		key_hook(int keycode, t_mlx *data);
void	ft_exit_mlx(t_mlx *data);

#endif