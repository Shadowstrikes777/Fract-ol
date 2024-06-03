/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:19:05 by mmaevani          #+#    #+#             */
/*   Updated: 2024/02/21 11:54:15 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*p;
	unsigned char	d;
	int				len;

	p = (char *)s;
	d = (unsigned char)c;
	len = ft_strlen(p);
	while (len >= 0)
	{
		if (p[len] == d)
			return (p + len);
		else
			len--;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char *p;
	p = ft_strrchr("teste", 0);
	printf("%s\n", p);
}*/