/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:07:34 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/08 11:55:48 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**splitter(char **strs, char const *s, char c, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		n;
	size_t		start;

	i = 0;
	j = 0;
	while (s[i] && j < size)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (!(strs[j] = (char *)malloc((i - start + 1) * sizeof(char))))
			return (NULL);
		n = 0;
		while (start < i)
			strs[j][n++] = s[start++];
		strs[j][n] = '\0';
		j++;
	}
	strs[j] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		size;
	char		**strs;

	if (!s)
		return (NULL);
	i = -1;
	size = 0;
	while (s[++i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			size++;
	}
	if (!(strs = malloc((size + 1) * sizeof(char *))))
		return (NULL);
	return (splitter(strs, s, c, size));
}
