/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:56:36 by mmaevani          #+#    #+#             */
/*   Updated: 2024/02/21 11:52:19 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (c + 32);
	else
		return (c);
}
/*#include <stdio.h>

int main() {
    int uppercase_char = 'A';
    int lowercase_char = 'a';
    int non_alphabetic_char = '*';

    return 0;
}*/