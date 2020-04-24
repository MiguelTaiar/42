/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 14:04:30 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/02/03 14:57:54 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	unsigned long		i;

	s1 = dest;
	s2 = src;
	i = -1;
	while (++i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == (unsigned char)c)
			return (&s1[i + 1]);
	}
	return (NULL);
}
