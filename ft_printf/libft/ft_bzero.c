/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:59:28 by mmaevani          #+#    #+#             */
/*   Updated: 2024/02/19 12:16:47 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	i;

	c = s;
	i = 0;
	while (n-- > 0)
	{
		c[i] = 0;
		i++;
	}
}

/*#include <stdio.h>

int main() {
    char str[50] = "This is a test string";
    size_t n = 10;

    printf("Before bzero: %s\n", str);
    
    ft_bzero(str, n);

    printf("After bzero: %s\n", str);

    return 0;
}
*/