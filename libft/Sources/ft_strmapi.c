/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:17:47 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 19:09:09 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	while (s[i] && str[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
