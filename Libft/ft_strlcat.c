/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:20:54 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/04 19:51:59 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dstlen;
	size_t		srclen;

	dstlen = ft_strlen(dst);
	if (size <= dstlen)
		return (ft_strlen(src) + size);
	srclen = -1;
	while ((++srclen + dstlen + 1) < size && src[srclen])
		dst[dstlen + srclen] = src[srclen];
	dst[srclen + dstlen] = '\0';
	return (dstlen + ft_strlen(src));
}
