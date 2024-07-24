/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:49:08 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/23 19:15:55 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
/*
#include <stdio.h>
int	main()
{
	char c = 'c';
	char d = '9';
	char f = '+';

	printf("c = %d d = %d f = %d ", ft_isalnum(c),ft_isalnum(d),ft_isalnum(f));
}*/
