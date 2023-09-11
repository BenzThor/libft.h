/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:19:16 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/11 18:24:26 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*chrptr;

	chrptr = (char *)s;
	while (n && *chrptr != (char)c)
	{
		chrptr++;
		n--;
	}
	if (*chrptr == (char)c && n > 0)
		return (chrptr);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	printf("%s", (char *)ft_memchr(tab, -1, 7));
}
 */
