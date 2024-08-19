/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:44:54 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/19 14:07:23 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define RED 0xFF0000
# define BLUE 0x0000FF
# define BLACK 0x000000
# define ORANGE 0xFFA500
# define YELLOW 0xFFFF00
# define WHITE 0xFFFFFF
# define BRITISH 0xFCBE11
# define TRUE 1
# define FALSE 0
# ifndef WINDOW_H
#  define WINDOW_H 800
# endif
# ifndef WINDOW_W
#  define WINDOW_W 800
# endif
# define ERRMSG0 "usage :\n ./fractal [fractal name] [parameters(if any)]"
# define MANDELBROT 1
# define JULIA 2
# include "m_basic.h"

void		ft_printparameters();
void		init_events(t_fr *data);
void		check_args(int ac, char **av, t_fr **data);
double		norm_c_squarred(t_complex z);
t_complex	mul_c(t_complex *zi, t_complex *z2);
t_complex	add_c(t_complex *zi, t_complex *z2);
void		init_mandel(t_fr *data);
int			calc_mandel(t_fr *data, t_complex c);
void		mallocerror(void *ptr);
void		render(t_fr *data);
void		init_fr(t_fr *data, char **av);
void		init_data(t_fr **data);
void		handlepixel(t_fr *data);
void		ft_putendl(char *str);
void		parse_args(char **av, t_fr **data);
void		check_julia_args(char **av, t_fr **data);
double		ft_atof(const char *str);
void		init_julia(t_fr *data);
int			calc_julia(t_fr *data);
#endif