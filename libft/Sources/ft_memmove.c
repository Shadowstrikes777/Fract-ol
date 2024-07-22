/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:32:24 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 19:07:07 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d ;
	const char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (0);
	if (dest <= src)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else if (dest > src)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
		{
			*d-- = *s--;
		}
	}
	return (dest);
}
/*
int main()
{
	char test[] = "123456";
	memmove(test+2, test, 3);
	printf("%s\n",test);
	char test2[] = "123456";
    ft_memmove(test2+2, test2, 3);
    printf("%s",test2);

}
*/