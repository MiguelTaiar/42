/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:02:46 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/02/13 19:08:33 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *nptr)
{
    int     i;
    int     ngtv;
    long     num;

    i = 0;
    num = 0;
    ngtv = 1;
    while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == ' ')
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            ngtv = -1;
        i++;
    }
    while (nptr[i] > 47 && nptr[i] < 58)
    {
        num = num * 10 + (nptr[i] - 48);
        i++;
    }
    return (num * ngtv);
}
