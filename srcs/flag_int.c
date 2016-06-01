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

	type = va_arg(ap, unsigned long int);
	returned_value = ft_put_nbr_base_uns(type, "0123456789");
	return (returned_value);
}
