/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:54:21 by mmaevani          #+#    #+#             */
/*   Updated: 2024/07/22 19:05:58 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*position;
	t_list	*next;

	if (!*lst)
		return ;
	position = *lst;
	while (position != NULL)
	{
		next = position->next;
		(*del)(position->content);
		free(position);
		position = next;
	}
	*lst = NULL;
}
