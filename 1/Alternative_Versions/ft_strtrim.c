/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:05:19 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/07 18:44:04 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		end;
	int		cnt;

	cnt = 0;
	ptr = (char *)s1;
	while (set[cnt] && *ptr)
	{
		if (set[cnt] != *ptr)
			cnt++;
		else
		{
			cnt = 0;
			ptr++;
		}
	}
	cnt = 0;
	end = ft_strlen(ptr) - 1;
	while (set[cnt] && &ptr[end] > ptr)
	{
		if (set[cnt] != ptr[end])
			cnt++;
		else
		{
			cnt = 0;
			end--;
		}
	}
	return (ft_substr(ptr, 0, end + 1));
}

int	main(void)
{
	printf("%s", ft_strtrim("abcaaabceasdfs fsf baaac", "adbc"));
}
