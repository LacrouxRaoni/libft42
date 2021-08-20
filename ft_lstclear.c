/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:52:16 by rruiz-la          #+#    #+#             */
/*   Updated: 2021/08/20 19:18:15 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*curr;

	temp = *lst;
	if (!lst || !del)
	{
		return ;
	}
	curr = *lst;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		if (temp->content)
		{
			del(temp);
		}
		free(temp);
	}
	*lst = NULL;
}
