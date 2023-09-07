/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:30:42 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/07 12:02:54 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*l;
	char	*b;
	int		i;
	int		j;

	b = (char *)big;
	l = (char *)little;
	if (*l == '\0')
		return (b);
	while (len && *b != '\0')
	{
		i = 0;
		while (b[i] == l[i] && b[i] != '\0')
		{
			if (l[i] == '\0')
				return (b);
			i++;
		}
		b++;
		len--;
	}
	return (NULL);
}

int	main(void)
{
	char	*s1 = "Wsdf asdf dsjdsl was sadfsd";
	char	*s2 = "was";

	printf("%s", ft_strnstr(s1, s2, 100));
}
