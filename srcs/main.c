/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 10:34:46 by apellegr          #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int		main()
	{

//  myprintf("float = %f\n", (float) 1.2345);
  ft_printf("int = %d   char = %c   Chaine = %s\n",
             123, 'A', "C is beautiful !" );
  return 0;

