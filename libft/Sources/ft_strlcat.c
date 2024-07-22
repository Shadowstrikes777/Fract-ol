/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:01:55 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 19:08:50 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	res;

	i = 0;
	len = 0 ;
	while (dst[len] && len < size)
		len++;
	res = len;
	while (len + 1 < size && src[i] != '\0')
	{
		dst[len] = src [i];
		i++;
		len++;
	}
	if (res < size)
	{
		dst[len] = '\0';
		return (res + ft_strlen(src));
	}
	else
		return (size + ft_strlen(src));
}
/*#include <stdio.h>

int main() {
    char dst[20] = "Hello, ";
    const char *src = "World!";
    size_t size = sizeof(dst);

    size_t result = ft_strlcat(dst, src, size);

    printf("Concatenated string: %s\n", dst);
    printf("Length of concatenated string: %zu\n", result);

    return 0;
}*/