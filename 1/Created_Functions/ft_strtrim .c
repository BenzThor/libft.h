/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:05:19 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/08 09:48:43 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	if (s1 == "\0" || set == "\0")
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && s1)
		start++;
	while (ft_strchr(set, s1[end]) && end > start)
		end--;
	if (start > end)
		ptr = ft_substr(s1, start - 1, 1);
	ptr = ft_substr(s1, start, (end - start + 1));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
/*
int	main(void)
{
	printf("%s", ft_strtrim("1abdbc", "adbc"));
} */
