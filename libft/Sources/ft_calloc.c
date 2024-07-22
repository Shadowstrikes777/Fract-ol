/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananarivo. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:28:23 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 18:56:01 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	long	total;

	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (0);
	ft_bzero(ptr, size * nmemb);
	if ((total >= -2147483648 && total <= 2147483647) && ptr)
	{
		return (ptr);
	}
	return (0);
}
/*#include <stdio.h>

int main() {
    size_t nmemb = 5;
    size_t size = sizeof(int);

    int *arr = (int *)ft_calloc(nmemb, size);

    if (arr) {
        printf("Memory allocated successfully using ft_calloc.\n");

        printf("Contents of the allocated memory:\n");
        for (size_t i = 0; i < nmemb; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        free(arr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/