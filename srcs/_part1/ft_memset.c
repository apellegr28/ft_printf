/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 13:57:57 by mblet             #+#    #+#             */
/*   Updated: 2014/02/22 15:07:53 by mblet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)b;
	i = 0;
	while (i < len)
	{
		tmp[i] = c;
		i = i + 1;
	}
	b = tmp;
	return (b);
}
