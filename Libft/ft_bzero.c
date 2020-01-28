#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	char *str = s;
	unsigned long i = -1;

	while (++i<n)
		str[i] = '\0';
	return str;
}
