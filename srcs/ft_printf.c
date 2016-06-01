/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 16:35:59 by apellegr          #+#    #+#             */
/*   Updated: 2016/06/01 15:13:15 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int			flag_len(char format)
{
	char		*len_modif;
	int			i;

	i = 0;
	len_modif = " #0123456789-+l.*";
	while (len_modif[i])
	{
		if (format == len_modif[i])
			return (1);
		i++;
	}
	return (0);
}

int			flag_ok(char format)
{
	int		j;

	j = 0;
	while (format != g_tab[j].key && j != NB_FLAGS)
		j++;
	if (j == NB_FLAGS)
		return (-1);
	return (j);
}

int			ft_ret_printf(int i, va_list ap, const char *format)
{
	int		ret;
	int		j;

	ret = 0;
	j = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			while ((flag_len(format[i + 1])) == 1)
				i++;
			if ((j = flag_ok(format[i + 1])) == -1)
				ft_putchar(format[i]);
			else
			{
				ret += g_tab[j].func(ap) - 1;
				i++;
			}
		}
		else
			ft_putchar(format[i]);
		ret++;
		i++;
	}
	return (ret);
}

int			ft_printf(const char *restrict format, ...)
{
	int			ret;
	int			i;
	va_list		ap;

	i = 0;
	ret = 0;
	va_start(ap, format);
	ret = ft_ret_printf(i, ap, format);
	va_end(ap);
	return (ret);
}
