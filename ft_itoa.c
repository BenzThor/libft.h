/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:46:00 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/08 14:08:34 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	cnt_num(int n)
{
	size_t	cnt;

	cnt = 0;
	if (n < 0)
	{
		n *= -1;
		cnt++;
	}
	while (n > 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static char	*ft_create_str(int cnt, int sign, int n)
{
	int		i;
	char	*str;

	str = malloc(cnt + 1);
	if (str == NULL)
		return (NULL);
	i = cnt;
	str[i--] = '\0';
	if (sign == 1)
	{
		str[0] = '-';
		cnt--;
	}
	while (cnt > 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
		cnt--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	cnt;
	size_t	sign;
	char	*str;

	sign = 0;
	cnt = cnt_num(n);
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	return (str = ft_create_str(cnt, sign, n));
}

int	main(void)
{
	printf("%s", ft_itoa(-350));
}
