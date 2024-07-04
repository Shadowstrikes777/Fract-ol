/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:26:20 by mmaevani          #+#    #+#             */
/*   Updated: 2024/02/20 14:32:38 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	size_t	i;

	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}
/*
int main()
{
	char src[] = "bonjour";
	char dest[100];

	printf("The dest  = %s :\n " , dest)
	char *destptr = ft_memcpy(dest,src,strlen(src) + 1); 
	// + 1 is for the null terminator
    printf("The dest  = %s :\n " , dest);
    printf("The destptraddress  = %p : the destaddress = %p " , destptr, dest);
}*/
