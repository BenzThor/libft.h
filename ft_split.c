/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:51:44 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/12 13:54:35 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	size_t	ft_str_count(char const *s, char c)
{
	size_t	arr_cnt;

	arr_cnt = 0;

	while (*s == c)
		s++;
	while (*s)
	{
		if (*s != c)
			arr_cnt++;
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
	}
	return (arr_cnt);
}
/*
static	void	ft_substr_gen(char **arr, char const *s, char c)
{
	unsigned int	i;
	size_t			arrlen;
	size_t			arr_cnt;

	i = 0;
	arr_cnt = 0;
	while (*s == c)
		s++;
	while (s[i] != '\0')
	{
		arrlen = 0;
		while (s[i + arrlen] != c && s[i + arrlen] != '\0')
			arrlen++;
		arr[arr_cnt] = ft_substr(s, i, arrlen);
		while (s[i + arrlen] == c && s[i + arrlen] != '\0')
			arrlen++;
		i += arrlen;
		arr_cnt++;
	}
	arr[arr_cnt] = NULL;
}
 */
char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	**arr;

	arr = (char **)malloc((ft_str_count(s, c)+ 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		len = 0;
		while (*s != c && *s && len++)
			s++;
		arr[i++] = ft_substr(s - len, 0, len);
	}
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**tab;
	int		i = 0;
	tab = ft_split(0 , 0);
	//  printf("%p\n", tab);
	if (tab[0] == NULL)
		printf("Is NULL");
}
 */
