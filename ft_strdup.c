/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:26:17 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/04 19:49:46 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	len;
	int		i;

	len = ft_strlen((char *)s) + 1;
	s2 = (char *)malloc(sizeof(char) * len);
	if (!(s2 = (char *)malloc(sizeof(char) * len)))
	{
		free(s2);
		return (NULL);
	}
	i = -1;
	while (s[++i])
		s2[i] = s[i];
	s2[i] = '\0';
	return (s2);
}
