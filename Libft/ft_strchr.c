#include "libft.h"

void	*ft_strchr(const void *s, int c)
{
	char *str = (char *)s;
	unsigned long i = 0;

	while (s)
	{
		if(str[i] == c)
			return &str[i];
		i++;
	}

	return NULL;
}
