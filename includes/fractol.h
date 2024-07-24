/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:44:54 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/24 10:31:29 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define RED 0xFF0000
# define BLUE 0x0000FF
# define BLACK 0x000000
# define ORANGE 0xFFA500
# define WHITE 0xFFFFFF
# define TRUE 1
# define FALSE 0
# ifndef WINDOW_H
#  define WINDOW_H 800
# endif
# ifndef WINDOW_W
#  define WINDOW_W 800
# endif
# define ERRMSG0 "usage :\n ./fractal [fractal name] [parameters(if any)]"
# define JULIA "julia"
# define MANDELBROT "mandelbrot"
# include "m_basic.h"
# include "utils.h"

double		norm_c(t_complex z);
t_complex	mul_c(t_complex *zi, t_complex *z2);
t_complex	add_c(t_complex *zi, t_complex *z2);
void		init_mandel(t_fr *data);
int			calc_mandel(t_fr *data, t_complex c);
void		make_mandelbrot(t_fr *data);
#endif