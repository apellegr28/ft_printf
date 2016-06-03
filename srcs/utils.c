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

int		ft_putnbr_base(unsigned int nb, char *base)
{
	int		result;
	int		div;
	unsigned int		len_base;
	int		ret;

	len_base = ft_strlen(base);
	ret = 0;
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

void	ft_putnbr_base_p(unsigned long int nb, char *base, unsigned int base_len)                                                                  
{
	if (nb >= base_len)
		ft_putnbr_base_p(nb / base_len, base, base_len);
	ft_putchar(base[nb % base_len]);
}

int		len_wchar(unsigned int c)
{
	if (c <= 0x7F)
		return (1);
	else if (c <= 0x7FF)
		return (2);
	else if (c <= 0xFFFF)
		return (3);
	else if (c <= 0x10FFFF)
		return (4);
	return (0);
}

void    ft_print_utf8(unsigned int codepoint)
{
	if (codepoint <= 0x7f)
		ft_putchar((char)(codepoint & 0x7f));
	else if (codepoint <= 0x7ff)
	{
		ft_putchar((char)(0xc0 | (codepoint >> 6)));
		ft_putchar((char)(0x80 | (codepoint & 0x3f)));
	}
	else if (codepoint <= 0xffff)
	{
		ft_putchar((char)(0xe0 | (codepoint >> 12)));
		ft_putchar((char)(0x80 | ((codepoint >> 6) & 0x3f)));
		ft_putchar((char)(0x80 | (codepoint & 0x3f)));
	}
	else if (codepoint <= 0x1fffff)
	{
		ft_putchar((char)(0xf0 | (codepoint >> 18)));
		ft_putchar((char)(0x80 | ((codepoint >> 12) & 0x3f)));
		ft_putchar((char)(0x80 | ((codepoint >> 6) & 0x3f)));
		ft_putchar((char)(0x80 | (codepoint & 0x3f)));
	}
	else
	ft_putendl("invalid wchar");
}