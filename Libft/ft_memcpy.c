#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *s1 = dest;
	const char *s2 = src;
	unsigned long i = -1;

	while (++i<n)
		s1[i] = s2[i];
	s1[i] = '\0';
	return s1;
}
