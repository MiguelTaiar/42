/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:55:50 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/02/13 15:37:28 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  k;


    if (little[0] == '\0')
        return ((char *)big);
    i = -1;
    while (big[++i])
    {
        j = 0;
        k = 0;
        while (big[i + k] == little[j] && little[j] && (i + k) < len)
        {
            k++;
            j++;
        }
        if (little[j] == '\0')
            return ((char *) &big[i]);
    }
    return (NULL);
}
