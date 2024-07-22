/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:00:17 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 19:09:15 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 1)
	{
		return (0);
	}
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
/*#include <stdio.h>

int main() {
    const char *s1 = "Hello";
    const char *s2 = "Hello, World!";
    size_t n = 5;

    int result = ft_strncmp(s1, s2, n);


    return 0;
}*/