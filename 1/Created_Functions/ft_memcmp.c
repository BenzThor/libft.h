#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	if (n == 0)
		return (0);
	while (n > 1 && *ptr1 == *ptr2 && *ptr1 != '\0' && *ptr2 != '\0')
	{
		ptr1++;
		ptr2++;
		n--;
	}
	return (*ptr1 - *ptr2);
/*
	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	while (n)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
 */
}

int	main(void)
{
	char	*s1 = "Wsd";
	char	*s2 = "Wae";

	printf("%d", ft_memcmp(s1, s2, 3));
}
