/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 14:00:56 by apellegr          #+#    #+#             */
/*   Updated: 2016/06/08 14:07:06 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		flag_bigd(va_list ap)
{
	int				ret;
	long int		nb;

	nb = va_arg(ap, long int);
	ret = ft_put_nbr_rec(nb);
	return (ret);
}

int		flag_bigu(va_list ap)
{
	int				returned_value;
	long int		type;
	char			*base;

	base = "0123456789";
	type = va_arg(ap, unsigned long int);
	returned_value = ft_putnbr_long_base(type, base);
	return (returned_value);
}

int		flag_bigo(va_list ap)
{
	int				returned_value;
	long int		type;
	char			*base;

	base = "01234567";
	type = va_arg(ap, unsigned long int);
	returned_value = ft_putnbr_long_base(type, base);
	return (returned_value);
}
