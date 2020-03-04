/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:27:21 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/02/27 21:23:04 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    i;
    char            *sub;

    if (!(sub = (char *)malloc((sizeof(char)) * (len + 1))) || !s)
        return (NULL);
    if (start > ft_strlen(s))
        return ((char *)sub);
    i = -1;
    while (++i < len)
        sub[i] = s[start + i];
    sub[i] = '\0';
    return ((char *)sub);
}