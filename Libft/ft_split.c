/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:07:34 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/02 20:14:46 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

char    **ft_split(char const *s, char c)
{
    size_t  i;
    size_t  j;
    size_t  size;
    size_t  lst;
    size_t  crepeat;
    char    **strs;

    if (!s)
        return (NULL);
    i = -1;
    size = 1;
    while (s[++i])
    {
        if (s[i] == c && s[i + 1] != c)
            size++;
    }
    if (!(strs = malloc(size * sizeof(char *) + 1)))
        return (NULL);
    i = -1;
    j = 0;
    lst = 0;
    crepeat = 0;
    while (s[++i])
    {
        if (s[i] == c && s[i + 1] == c)
            crepeat++;
        else if (j == 0 && s[i] == c && s[i + 1] != c)
        {
            strs[j] = ft_substr(s, 0, i - crepeat);
            lst = i;
            crepeat = 0 * j++;
        }
        else if (s[i] == c && s[i + 1] != c)
        {  
            strs[j] = ft_substr(s, lst + 1, i - lst - 1 - crepeat);
            lst = i;
            crepeat = 0 * j++;
        }
        else if (s[i + 1] == '\0')
        {  
            strs[j] = ft_substr(s, lst + 1, i - lst - crepeat);
            lst = i;
            crepeat = 0 * j++;
        }
    }
    strs[j + 1] = '\0';
    return (strs);
}
