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

int		ft_put_nbr_base_uns(long unsigned int nb, char *base)
{
	int		len;
	int		i;
	int		nb_len;

	nb_len = 0;
	// if (nb < 0)
	// {
	// 	ft_putchar('-');
	// 	nb *= -1;
	// 	nb_len++;
	// }
	len = ft_strlen(base);
	i = nb % len;
	nb = nb / len;
	if (nb > 0)
		nb_len = nb_len + ft_put_nbr_base_uns(nb, base);
	ft_putchar(base[i]);
	nb_len++;
	return (nb_len);
}
