/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/25 12:29:38 by mblet             #+#    #+#             */
/*   Updated: 2016/02/15 22:15:03 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	if ((tmp = (t_list *)malloc(sizeof(t_list))) != NULL)
	{
		if (!content)
		{
			tmp->content = NULL;
			tmp->content_size = 0;
		}
		else
		{
			if ((tmp->content = (void *)malloc(content_size)) != NULL)
			{
				ft_memmove(tmp->content, content, content_size);
				tmp->content_size = content_size;
			}
			else
			{
				free(tmp);
				return (NULL);
			}
		}
		tmp->next = NULL;
	}
	return (tmp);
}
