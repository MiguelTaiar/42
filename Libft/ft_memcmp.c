#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1 = (char *)s1;
	char *str2 = (char *)s2;
	unsigned long i = -1;

	while (++i<n)
	{
		if(str1[i]>str2[i])
			return str1[i] - str2[i];
		else if(str1[i]<str2[i])
			return str1[i] - str2[i];
	}
	return 0;
}
