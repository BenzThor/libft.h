/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:16:00 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/09 16:29:31 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		len;
	t_list	*map;

	if (!lst || !f || !del)
		return ;
	len = ft_lstsize(lst);
	map = (size_t *)malloc(len * sizeof(size_t));
	map = lst;
	ft_lstiter(map, f);
	return (map);
}
