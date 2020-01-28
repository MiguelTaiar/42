#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *cdest = (char *)dest;
	char *csrc =  (char *)src;
	char buff[n];
	unsigned long i = -1;

	while (++i<n)
		buff[i] = csrc[i];
	i = -1;
	while (++i<n)
		cdest[i] = buff[i];
	return cdest;
}
