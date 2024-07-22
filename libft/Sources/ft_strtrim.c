/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:17:03 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 19:09:29 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_batman(char c, const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (ft_batman(s1[i], set) == 1)
	{
		i++;
	}
	while (i < len && ft_batman(s1[len - 1], set) == 1)
	{
		len--;
	}
	return (ft_substr(s1, i, len - i));
}
/*#include <stdio.h>

int main() {
    const char *s1 = "  Hello, World!  ";
    const char *set = " ";
    
    char *trimmed = ft_strtrim(s1, set);

    if (trimmed != NULL) {
        printf("Original string: \"%s\"\n", s1);
        printf("Trimmed string: \"%s\"\n", trimmed);
        free(trimmed); // Free the memory allocated by ft_strtrim
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/