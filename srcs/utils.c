/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 17:26:14 by apellegr          #+#    #+#             */
/*   Updated: 2016/06/01 17:26:42 by apellegr         ###   ########.fr       */
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

int		ft_putnbr_base(int nb, char *base)
{
	int		result;
	int		div;
	int		len_base;
	int		ret;

	len_base = ft_strlen(base);
	ret = 0;
	if (nb < 0)
	{
		nb = -nb;
	}
	div = 1;
	while ((nb / div) >= len_base)
	{
		div = div * len_base;
		ret++;
	}
	while (div > 0)
	{
		result = (nb / div) % len_base;
		ft_putchar(base[result]);
		div = div / len_base;
	}
	return (ret);
}
