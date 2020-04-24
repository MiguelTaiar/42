/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 14:09:57 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/07 17:50:56 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*cdest;
	char			*csrc;
	unsigned long	i;

	if (!dest && !src)
		return (NULL);
	cdest = (char *)dest;
	csrc = (char *)src;
	if (cdest > csrc)
	{
		i = n;
		while (i-- > 0)
			cdest[i] = csrc[i];
		return (cdest);
	}
	i = -1;
	while (++i < n)
		cdest[i] = csrc[i];
	return (cdest);
}
