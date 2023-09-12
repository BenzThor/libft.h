/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:51:44 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/12 11:49:32 by tbenz            ###   ########.fr       */
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
		while (*s != c)
			s++;
		while (*s == c)
			s++;
	}
	return (arr_cnt);
}

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

char	**ft_split(char const *s, char c)
{
	size_t	str_cnt;
	char	**arr;

	if (!*s)
		str_cnt = 0;
	else
		str_cnt = ft_str_count(s, c);
	arr = (char **)malloc((str_cnt + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	ft_substr_gen(arr, s, c);
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**tab;
	int		i = 0;
	int		j = 0;
	tab = ft_split(" Tripouille ", ' ');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
 */
