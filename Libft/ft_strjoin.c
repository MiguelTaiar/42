/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:24:25 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/02/28 14:31:48 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    size_t  j;
    size_t  lens1;
    size_t  lens2;
    char    *join;

    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);
    if (!s1 || !s2 || !(join = (char *)malloc((lens1 + lens2 + 1))))
        return (NULL);
    i = -1;
    while (++i < lens1)
        join[i] = (char)s1[i];
    j = -1;
    while (++j < lens2)
        join[i++] = (char)s2[j];
    join[i] = '\0';
    return (join);
}
