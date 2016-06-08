/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 14:27:16 by mblet             #+#    #+#             */
/*   Updated: 2015/11/27 00:52:58 by mblet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	if (s && start + len <= ft_strlen(s))
	{
		newstr = ft_strnew(len);
		if (newstr)
			return (ft_strncpy(newstr, s + start, len));
	}
	return (0);
}
