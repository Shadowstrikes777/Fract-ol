/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:31:34 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 19:09:34 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		p = (char *)malloc(sizeof(char) * 1);
		if (!p)
			return (NULL);
		*p = '\0';
		return (p);
	}
	if (len > s_len - start)
		len = s_len - start;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s + start, len + 1);
	return (p);
}
//#include <stdio.h>
/*int	main(void)
{
	char	*substring1;
	char	*substring2;

	substring1 = ft_substr("i just want this part #############", 5, 20);
	printf("%s\n", substring1);
	free(substring1);
	substring2 = ft_substr("1", 0, 1);
	printf("%s\n", substring2);
	free(substring2); 
	return (0);
}
*/