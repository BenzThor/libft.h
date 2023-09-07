/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:19:16 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/07 14:32:16 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*chrptr;

	chrptr = (unsigned char *)s;
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
int	main(void)
{
	char	*str1;

	str1 = "Was machst dum da?";
	printf("%p address of c: %p", ft_memchr(str1, 'a' + 256, 2), &str1[1]);
} */
