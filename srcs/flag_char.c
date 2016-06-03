/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 15:13:11 by apellegr          #+#    #+#             */
/*   Updated: 2016/06/01 15:13:15 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		flag_s(va_list ap)
{
	int		ret;
	char	*str;
	int		i;

	i = 0;
	ret = 0;
	str = va_arg(ap, char *);
	if (str == NULL)
	{
		ft_putstr("(NULL)");
		ret = 6;
	}
	else
	{
		while (str && str[i])
		{
			ft_putchar(str[i]);
			ret++;
			i++;
		}
	}
	return (ret);
}

int		flag_c(va_list ap)
{
	int		ret;
	char	c;

	ret = 1;
	c = va_arg(ap, int);
	ft_putchar(c);
	return (ret);
}

int		flag_percent(va_list ap)
{
	int		returned_value;

	(void)ap;
	returned_value = 1;
	ft_putchar('%');
	return (returned_value);
}

int		flag_bigs(va_list ap)
{
	int		returned_value;
	char		*type;
	int		i;

	i = 0;
	type = va_arg(ap, unsigned int);
	returned_value = 0;
	ft_print_utf8(type);
	returned_value = len_wchar(type);
	return (returned_value);
}

