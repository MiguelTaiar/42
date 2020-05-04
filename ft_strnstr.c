/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/04 20:02:31 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = -1;
	while (haystack[++i])
	{
		j = 0;
		k = 0;
		while (haystack[i + k] == needle[j] && needle[j] && (i + k) < len)
		{
			k++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
	}
	return (NULL);
}
