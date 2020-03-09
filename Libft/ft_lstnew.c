/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 12:49:33 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/03/09 15:19:52 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list		*new;

	if (!(new = (struct s_list*)malloc(sizeof(struct s_list))))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
