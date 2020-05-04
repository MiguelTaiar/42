/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:26:17 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/05/03 23:54:39 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	len;
	int		i;

	len = ft_strlen(s) + 1;
	if (!(s2 = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	i = -1;
	while (s[++i])
		s2[i] = s[i];
	s2[i] = '\0';
	return (s2);
}
