/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 13:05:47 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/04 13:06:33 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    int     i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], sizeof(char));
        i++;
    }
    write(fd, "\n", 1);
}
