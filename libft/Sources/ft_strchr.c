/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:03:53 by mmaevani          #+#    #+#             */
/*   Updated: 2024/02/22 18:36:03 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char			*p;
	unsigned char	d;
	unsigned int	i;

	p = (char *)s;
	i = 0;
	d = c;
	while (p[i] != '\0')
	{
		if ((unsigned char)p[i] == d)
			return (p + i);
		else
			i++;
	}
	if (p[i] == d)
		return (p + i);
	else
		return (NULL);
}
/*
int	main(void)
{
	printf("%p\n", ft_strchr("teste",'a'));
}*/
