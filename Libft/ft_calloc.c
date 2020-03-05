/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:49:17 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/04 19:45:21 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	total;

	total = nmemb * size;
	if (!(arr = malloc(total)))
	{
		free(arr);
		return (NULL);
	}
	arr = ft_bzero(arr, total);
	return (arr);
}
