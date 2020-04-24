/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 14:33:29 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/08 12:04:34 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] && ft_strchr(set, s1[j]))
		j++;
	i = ft_strlen(s1);
	if (i == j)
		return (ft_strdup(""));
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, j, i - j + 1));
}
