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
	ft_printf("bonjour\n");
	ft_printf("int1: %d, int2: %d, int3: %dft_printf:\n", 1, 2, 3);
	printf("int1: %d, int2: %d, int3: %d\n", 1, 2, 3);
	ft_printf("string: %sft_printf:\n", "bonjour fdp");
	printf("string: %s\n", "bonjour fdp");
	ft_printf("affiche percent:%%ft_printf:\n");
	printf("affiche percent:%%\n");
	printf("flag_u printf: %u\n", -33);
	ft_printf("flag_u ft_printf: %u\n", -33);
	return (0);
}
