/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:37:57 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/07 15:14:25 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	cr_len;

	cr_len = ft_strlen(&s[start]);
	ptr = (char *)malloc(cr_len);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, &s[start], len + 1);
	return (ptr);
}
/*
int	main(void)
{
	printf("%s", ft_substr("Passt alles?", 6, 5));
} */
