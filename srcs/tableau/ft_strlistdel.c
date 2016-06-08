/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlistdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 15:44:52 by mblet             #+#    #+#             */
/*   Updated: 2015/04/26 15:25:35 by mblet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	ft_strlistdel(char **l)
{
	size_t	i;

	i = ft_strlistlen(l);
	while (i > 0)
	{
		free(l[i - 1]);
		i--;
	}
	free(l);
}
