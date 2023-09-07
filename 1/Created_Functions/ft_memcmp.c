/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:33:12 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/07 14:33:26 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	if (n == 0)
		return (0);
	while (n > 1 && *ptr1 == *ptr2 && *ptr1 != '\0' && *ptr2 != '\0')
	{
		ptr1++;
		ptr2++;
		n--;
	}
	return (*ptr1 - *ptr2);
}
/*
int	main(void)
{
	char	*s1 = "Wsd";
	char	*s2 = "Wae";

	printf("%d", ft_memcmp(s1, s2, 3));
}
 */
