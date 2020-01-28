#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str = (char *)s;
	unsigned long i = -1;

	while (++i<n)
	{
		if(str[i] == c)
			return &str[i];
	}

	return NULL;
}
