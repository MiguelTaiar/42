/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:29:29 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/02/12 17:54:29 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    if (dst == NULL || src == NULL)
        return (0);
    if (size == 0)
        return (ft_strlen(src));
    i = -1;
    while (++i < size - 1 && src[i]) 
        dst[i] = src[i];
    dst[i] = '\0';
    return (ft_strlen(src));
}
