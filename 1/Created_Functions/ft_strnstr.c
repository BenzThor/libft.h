/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:30:42 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/07 12:28:12 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;


	if (*little == '\0')
		return ((char *)big);
	while (len && *big != '\0')
	{
		i = 0;
		while (big[i] == little[i] && big[i] != '\0')
		{
			if (little[i + 1] == '\0')
				return ((char *)big);
			i++;
		}
		big++;
		len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s1 = "Wsdf asdf dsjdsl was sadfsd";
	char	*s2 = "was";

	printf("%s", ft_strnstr(s1, s2, 100));
}
 */
