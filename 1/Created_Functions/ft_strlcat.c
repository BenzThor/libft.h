/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:21:51 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/06 18:04:09 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t		i;
// 	size_t		j;
// 	size_t		slen;
// 	size_t		dlen;

// 	j = 0;
// 	i = ft_strlen(dst);
// 	dlen = i;
// 	slen = ft_strlen(src);
// 	if (size == 0 || size <= dlen)
// 		return (slen + size);
// 	while (src[j] != '\0' && j < (size - dlen - 1))
// 	{
// 		dst[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dst[i] = '\0';
// 	return (dlen + slen);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	j = dst_len;
	i = 0;
	if (size == 0 || size <= dst_len)
		return (src_len + size);
	while ((src[i] != '\0') && (i < (size - dst_len - 1)))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (src_len + dst_len);
}

int	main(void)
{
	char	src[] = "wasasdf";
	char	dest[] = "asdfasdfasd";

	printf("%ld\n", ft_strlcat(dest, src, 30));
	printf("%s", dest);

	return (0);
}
