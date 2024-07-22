/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:53:50 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 19:09:46 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
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