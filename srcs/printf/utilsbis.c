/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsbis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 16:48:25 by apellegr          #+#    #+#             */
/*   Updated: 2016/06/08 16:51:41 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_utf8(unsigned int codepoint)
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

int		ft_putnbr_long_base(unsigned long int nb, char *base)
{
	long int				result;
	long int				div;
	unsigned long int		len_base;
	long int				ret;

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
