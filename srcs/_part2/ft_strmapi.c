/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 14:21:10 by mblet             #+#    #+#             */
/*   Updated: 2016/02/15 21:54:45 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			newstr[i] = f(i, s[i]);
			i++;
		}
		return (newstr);
	}
	return (NULL);
}
