/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:52:41 by rruiz-la          #+#    #+#             */
/*   Updated: 2021/08/20 18:56:23 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_list;

	if (!lst || !f)
	{
		return (NULL);
	}
	new_list = NULL;
	while (lst)
	{
		new_list = ft_lstnew(tmp->content);
		if (!new_list)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		tmp->content = f(tmp->content);
		ft_lstadd_back(&new_list, tmp);
		lst = lst->next;
	}
	return (new_list);
}
