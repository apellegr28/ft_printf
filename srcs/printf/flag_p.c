/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 19:28:35 by apellegr          #+#    #+#             */
/*   Updated: 2016/06/02 19:28:54 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			flag_p(va_list ap)
{
	int					returned_value;
	unsigned long int	type;

	returned_value = 0;
	type = va_arg(ap, unsigned long int);
	if (type == 0)
	{
		ft_putstr("(nil)");
		returned_value = 5;
	}
	else
	{
		ft_putstr("0x");
		ft_putnbr_base_p((unsigned long int)type, "0123456789abcdef", 16);
	}
	return (returned_value);
}
