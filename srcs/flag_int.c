/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 15:13:21 by apellegr          #+#    #+#             */
/*   Updated: 2016/06/01 15:13:22 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		flag_d(va_list ap)
{
	int		ret;
	int		nb;

	nb = va_arg(ap, int);
	ret = ft_put_nbr_rec(nb);
	return (ret);
}

int		flag_u(va_list ap)
{
	int		returned_value;
	int		type;
	char	*base;

	base = "0123456789";
	type = va_arg(ap, int);
	returned_value = ft_putnbr_base(type, base);
	return (returned_value);
}
