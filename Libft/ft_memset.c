#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *str = s;
	unsigned long i = -1;

	while (++i<n)
		str[i] = c;
	return str;
}
