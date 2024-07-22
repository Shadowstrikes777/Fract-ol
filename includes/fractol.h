/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:44:54 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 19:10:25 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define RED 0xFF0000
# define BLUE 0x0000FF
# define ORANGE 0xFFA500
# ifndef WINDOW_H
#  define WINDOW_H 800
# endif
# ifndef WINDOW_W
#  define WINDOW_W 800
# endif
# define ERRMSG0 "usage :\n ./fractal [fractal name] [parameters(if any)]"
# define JULIA "julia"
# define MANDELBROT "mandelbrot"
// this regroups all the header files 
# include "m_basic.h"
# include "utils.h"

#endif