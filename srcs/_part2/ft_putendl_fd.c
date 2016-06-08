/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendl_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 14:01:28 by mblet             #+#    #+#             */
/*   Updated: 2015/05/20 13:44:57 by mblet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	*tmp;
	int		len;

	if (!s)
		write(fd, "\n", 1);
	len = ft_strlen(s);
	tmp = ft_strnew(len + 1);
	tmp = ft_memcpy(tmp, s, len + 1);
	tmp[len] = '\n';
	write(fd, tmp, len + 1);
	ft_strdel(&tmp);
}
