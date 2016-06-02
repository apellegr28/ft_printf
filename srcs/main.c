/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 16:55:41 by apellegr          #+#    #+#             */
/*   Updated: 2016/06/01 16:58:22 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <locale.h>

int		main(void)
{
	setlocale (LC_ALL,"");
	printf("printf    string: %s\n", "bonjour fdp");
	ft_printf("ft_printf string: %s\n", "bonjour fdp");
	printf("printf    affiche percent:%%\n");
	ft_printf("ft_printf affiche percent:%%\n");
	printf("printf    flag_u: %u\n", -33);
	ft_printf("ft_printf flag_u: %u\n", -33);
	printf("printf    flag_o: %o\n", 10);
	ft_printf("ft_printf flag_o: %o\n", 10);
	printf("printf    flag_x: %x\n", 10);
	ft_printf("ft_printf flag_x: %x\n", -10);
	printf("printf    flag_o: %o\n", -10);
	ft_printf("ft_printf flag_o: %o\n", -10);
	printf("printf    flag_x: %x\n", -10);
	ft_printf("ft_printf flag_x: %x\n", -10);
	return (0);
}
