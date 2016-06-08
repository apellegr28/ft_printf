/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 14:24:03 by mblet             #+#    #+#             */
/*   Updated: 2015/05/20 13:36:40 by mblet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*newstr;

	newstr = (char*)malloc((size + 1) * sizeof(char));
	if (newstr)
	{
		ft_bzero(newstr, size + 1);
		return (newstr);
	}
	return (NULL);
}
