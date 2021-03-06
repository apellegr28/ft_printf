/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 14:07:11 by mblet             #+#    #+#             */
/*   Updated: 2015/01/25 12:03:39 by mblet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	if ((*s2 != '\0') && (*s1 != '\0') && (*s1 == *s2))
		return (ft_strcmp(++s1, ++s2));
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}
