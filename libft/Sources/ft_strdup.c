/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:10:34 by mmaevani          #+#    #+#             */
/*   Updated: 2024/02/26 16:27:43 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (ptr)
		ft_strcpy(ptr, s);
	return (ptr);
}
/*#include <stdio.h>

int main() {
    const char *original = "Hello, World!";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        printf("Original string: %s\n", original);
        printf("Duplicate string: %s\n", duplicate);
        free(duplicate); // Free the memory allocated by ft_strdup
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/