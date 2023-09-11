/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:17:43 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/11 19:45:43 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*srcptr;
	char		*destptr;

	if (!dest || !src)
		return (NULL);
	i = 0;
	srcptr = src;
	destptr = dest;
	while (i < n)
	{
		destptr[i] = srcptr[i];
		i++;
	}
	return (destptr);
}
/*
int	main(void)
{
	char	str[] = "SrcString";
	char	str2[] = "DestString";
	printf("%s, %s\n", str, str2);
	ft_memcpy(str2, str, 3);
	printf("%s", str2);
}
 */
