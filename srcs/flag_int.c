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

int		ft_put_nbr_rec(int nb)
{
	int		ret;

	ret = 0;
	if (nb <= -2147483648)
	{
		ft_putstr("-2147483648");
		ret = 11;
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
			ret++;
		}
		if (nb / 10 != 0)
			ret += ft_put_nbr_rec(nb / 10);
		ret++;
		ft_putchar('0' + (nb % 10));
	}
	return (ret);
}

int		flag_d(va_list ap)
{
	int		ret;
	int		nb;

	nb = va_arg(ap, int);
	ret = ft_put_nbr_rec(nb);
	return (ret);
}
