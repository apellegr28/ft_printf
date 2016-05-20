/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 16:35:59 by apellegr          #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static const t_toto print_types[] =
  {
    {'%', print_mod},
    {'c', print_char},
    {'s', print_str},
    {0, 0}
  };

int		ft_printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);
	va_end ap;
	int		i;
	int		j;

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (print_types[j])
			{
				if (format[i] == print_types[j])
				{
					print_types[i].ftc(PARAM A LA CON)
				}
				j++;
			}
		}
		i++;
	}

}
