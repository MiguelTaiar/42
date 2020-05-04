/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 14:03:08 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/05/02 01:26:00 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	const char		*s2;
	unsigned long	i;

	if (!dest && !src)
		return (NULL);
	s1 = dest;
	s2 = src;
	i = -1;
	while (++i < n)
		s1[i] = s2[i];
	return (s1);
}
