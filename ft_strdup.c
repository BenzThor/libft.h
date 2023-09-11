/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:13:44 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/11 19:05:36 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*ptr;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s, len);
	ptr[len + 1] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*str_dup;
	printf("%s", ft_strdup("Passt alles?"));
}
 */
