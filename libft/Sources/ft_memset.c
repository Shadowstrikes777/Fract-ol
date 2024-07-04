/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:13:46 by mmaevani          #+#    #+#             */
/*   Updated: 2024/02/20 13:23:27 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	d;
	size_t			i;

	p = s;
	d = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = d;
		i++;
	}
	return (p);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char test[] = "0123456789";
    printf("avant  = %s\n", test);
	ft_memset(test,0,5);
	printf("apres  = %s\n", test);
}*/
