/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:07:34 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/04 20:41:48 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		next_c(char const *s, char c, int i)
{
	int		j;

	j = 0;
	while (s[i + j] != c && s[i + j] != '\0')
		j++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	**strs;

	if (!s)
		return (NULL);
	i = -1;
	size = 0;
	while (s[++i])
	{
		if ((s[i] != c && s[i - 1] == c))
			size++;
	}
	if (!(strs = malloc(size * sizeof(char *) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j <= size)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			strs[j] = ft_substr(s, i, next_c(s, c, i));
			j++;
			i += next_c(s, c, i);
		}
		i++;
	}
	strs[j] = "\0";
	return (strs);
}
