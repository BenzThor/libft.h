/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:19:45 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/05 18:43:46 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 63 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}

/*int	main(void)
{
	if (ft_isalpha(75) == 1)
		printf("Working well");
	else
		printf("Something went wrong");
}
*/
