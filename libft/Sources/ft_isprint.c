/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:28:57 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 19:05:33 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int main() {
    int test_char = 'A';

    if (ft_isprint(test_char)) {
        printf("%c is a printable character.\n", test_char);
    } else {
        printf("%c is not a printable character.\n", test_char);
    }

    return 0;
}*/