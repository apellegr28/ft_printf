/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 14:20:04 by mblet             #+#    #+#             */
/*   Updated: 2016/02/15 21:54:48 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*newstr;
	unsigned int	i;

	if (s && *f)
	{
		newstr = ft_strdup(s);
		if (!newstr)
			return (NULL);
		i = 0;
		while (i < ft_strlen(s))
		{
			newstr[i] = f(s[i]);
			i++;
		}
		return (newstr);
	}
	return (NULL);
}
