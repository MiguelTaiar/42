#include "libft.h"

void	*ft_memccpy(void *dest, const void *src,int c, size_t n)
{
	char *s1 = dest;
	const char *s2 = src;
	unsigned long i = -1;

	while (++i<n)
	{
		s1[i] = s2[i];
		if (s2[i] == c)
			return s1;
	}
	s1[i] = '\0';
	return s1;
}
