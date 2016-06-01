/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 12:57:34 by apellegr          #+#    #+#             */
/*   Updated: 2016/05/31 15:51:24 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft.h"
# include <stdarg.h>

# define NB_FLAGS	4

typedef struct		s_func
{
	char	key;
	int		(*func)	(va_list ap);
}					t_func;

int					ft_printf(const char *restrict format, ...);
int					flag_s(va_list ap);
int					flag_d(va_list ap);
int					flag_c(va_list ap);
int					flag_ok(char format);
int					flag_percent(va_list ap);
int					ft_ret_printf(int i, va_list ap, const char *format);

extern t_func g_tab[NB_FLAGS];

#endif
