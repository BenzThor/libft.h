/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:16:00 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/09 17:20:14 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*lst_elem;

	if (!lst || !f || !del)
		return ;
	map = NULL;
	while (lst)
	{
		lst_elem = ft_lstnew(((*f)(lst->content)));
		if (!lst_elem)
			return (NULL);
		ft_lstadd_back(&lst_elem, map);
		lst = lst->next;
	}
	return (map);
}
