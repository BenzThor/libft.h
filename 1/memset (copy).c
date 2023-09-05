/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset (copy).c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:14:49 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/05 14:04:39 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*memset(void *s, int c, size_t n)
{
	size_t	i;
	s = *(char*)s;

	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char str[] = "Was machst du?";
    memset(str, 88, 8);
    printf("%s", str);
    return 0;
}
