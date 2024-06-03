/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:35:24 by mmaevani          #+#    #+#             */
/*   Updated: 2024/02/21 09:58:22 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*#include <stdio.h>

int main() {
    char dst[20];
    const char *src = "Hello, World!";
    size_t size = sizeof(dst);

    size_t result = ft_strlcpy(dst, src, size);

    printf("Copied string: %s\n", dst);
    printf("Length of copied string: %zu\n", result);

    return 0;
}*/