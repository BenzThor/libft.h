/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:13:44 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/07 14:30:32 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	int		len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s, len);
	return (ptr);
}
/*
int main(void)
{
	printf("%s", strdup("Passt alles?"));
}
 */
