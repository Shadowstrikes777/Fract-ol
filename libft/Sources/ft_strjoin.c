/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:23:15 by mmaevani          #+#    #+#             */
/*   Updated: 2024/02/28 11:45:18 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Alloue (avec malloc(3)) et retourne une nouvelle
chaîne, résultat de la concaténation de s1 et s2.*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;

	p = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, ft_strlen(s1) + 1);
	ft_strlcat(p, s2, ft_strlen(s1) + 1 + ft_strlen(s2));
	return (p);
}
/*#include <stdio.h>

int main() {
    const char *s1 = "Hello, ";
    const char *s2 = "World!";
    char *result = ft_strjoin(s1, s2);

    if (result != NULL) {
        printf("Joined string: %s\n", result);
        free(result); // Free the memory allocated by ft_strjoin
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/