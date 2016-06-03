/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/03 12:08:16 by apellegr          #+#    #+#             */
/*   Updated: 2016/06/03 12:08:28 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			flag_b(va_list ap)
{
	int					returned_value;
	unsigned long int	type;

	type = va_arg(ap, long unsigned int);
	returned_value = ft_putnbr_base(type, "01");
	return (returned_value);
}

int		flag_o(va_list ap)
{
	int		returned_value;
	int		type;
	char	*base;

	base = "01234567";
	type = va_arg(ap, unsigned int);
	returned_value = ft_putnbr_base(type, base);
	return (returned_value);
}

int		flag_x(va_list ap)
{
	int		returned_value;
	int		type;
	char	*base;

	base = "0123456789abcdef";
	type = va_arg(ap, unsigned int);
	returned_value = ft_putnbr_base(type, base);
	return (returned_value);
}
