/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:08:11 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/02/24 22:46:23 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *str;

    if (!s || !f || !(str = malloc(ft_strlen((char *)s) + 1)))
        return (NULL);
    i = 0;
    while (s[++i])
        str[i] = f(i, s[i]);
    str[i] = '\0';
    return (str);
}
