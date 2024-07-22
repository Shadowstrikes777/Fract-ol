/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:23:15 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 19:08:38 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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