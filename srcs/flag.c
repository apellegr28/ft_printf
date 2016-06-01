/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 20:08:06 by apellegr          #+#    #+#             */
/*   Updated: 2016/05/31 20:08:49 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_func g_tab[] =
{
	{'d', &flag_d},
	{'s', &flag_s},
	{'c', &flag_c},
	{'%', &flag_percent},
	{'u', &flag_u},
};
