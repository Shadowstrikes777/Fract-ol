/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:34:56 by mmaevani          #+#    #+#             */
/*   Updated: 2024/02/21 11:55:53 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	d;

	d = (unsigned char)c;
	p = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*p == d)
			return (p);
		p++;
	}
	return (0);
}
/*#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int c = 'o';
    size_t n = sizeof(str);
    void *result = ft_memchr(str, c, n);
    if (result != NULL) {
        printf("Character '%c'", c);
    } else {
        printf("Character '%c' not found.\n", c);
    }

    return 0;
}*/