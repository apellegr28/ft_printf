/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 13:57:00 by mblet             #+#    #+#             */
/*   Updated: 2014/02/22 13:57:12 by mblet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*buf;

	buf = NULL;
	if (n)
		buf = malloc(n);
	if (buf)
	{
		ft_memcpy(buf, s2, n);
		ft_memcpy(s1, buf, n);
		free(buf);
	}
	return (s1);
}
