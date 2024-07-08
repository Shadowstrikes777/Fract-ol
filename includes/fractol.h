/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:44:54 by mmaevani          #+#    #+#             */
/*   Updated: 2024/06/24 15:46:45 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define RED 0xFF0000
# define BLUE 0x0000FF
# define ORANGE 0xFFA500
# define RECTANGLE 1
# ifndef WINDOW_W
#  define WINDOW_W 800
# endif
# ifndef WINDOW_H
#  define WINDOW_H 400
# endif
# define ERRMSG0 "Usage : ./fractol [fractal name]"
// this regroups all the header files 
# include "m_basic.h"
# include "utils.h"

#endif