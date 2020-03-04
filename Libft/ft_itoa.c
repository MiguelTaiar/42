/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 22:05:12 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/04 01:32:44 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *convert(char *nmbr, long n, int size)
{
    int     i;
    int     ctrl;

    i = size - 1;
    ctrl = 0;
    if (n < 0)
    {
        n *= -1;
        nmbr[0] = '-';
        ctrl = 1;
    }
    while (i >= ctrl)
    {
        if (ft_isdigit(n % 10 + 48))
            nmbr[i] = n % 10 + 48;
        n /= 10;
        i--;
    }
    nmbr[size] = '\0';
    return(nmbr);
}

char    *ft_itoa(int n)
{
    char    *nmbr;
    int     digits;
    long     i;

    if (n == 0)
        return ("0");
    digits = 1;
    i = n;
    if (i < 0)
    {
        i *= -1;
        digits++;
    }
    while (i / 10 > 0)
    {
        i /= 10;
        digits++;
    }
    if (!(nmbr = (char *)malloc((sizeof(char) * digits) + 1)))
        return (NULL);
    return (convert(nmbr, n, digits));
}
