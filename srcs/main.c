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

int		main(void)
{
	ft_printf("bonjour\n");
	ft_printf("int1: %d, int2: %d, int3: %d\n", 1, 2, 3);
	ft_printf("string: %s\n", "bonjour fdp");
	ft_printf("affiche percent:%%\n");
	return (0);
}
