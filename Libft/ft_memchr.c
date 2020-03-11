/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 13:58:34 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/10 18:09:24 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	unsigned long	i;

	str = s;
	i = -1;
	while (++i < n)
	{
		if (str[i] == c)
			return ((void *)&str[i]);
	}
	return (NULL);
}
