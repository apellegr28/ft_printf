/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 12:57:34 by apellegr          #+#    #+#             */
/*   Updated: 2016/06/08 16:28:43 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <wchar.h>

# define NB_FLAGS	16

typedef struct		s_func
{
	char	key;
	int		(*func)	(va_list ap);
}					t_func;

int					ft_printf(const char *restrict format, ...);

int					flag_s(va_list ap);
int					flag_d(va_list ap);
int					flag_c(va_list ap);
int					flag_u(va_list ap);
int					flag_o(va_list ap);
int					flag_x(va_list ap);
int					flag_bigx(va_list ap);
int					flag_p(va_list ap);
int					flag_b(va_list ap);
int					flag_ok(char format);
int					flag_percent(va_list ap);
int					flag_bigs(va_list ap);
int					flag_bigd(va_list ap);
int					flag_bigu(va_list ap);
int					flag_bigo(va_list ap);
int					flag_bigc(va_list ap);

int					ft_ret_printf(int i, va_list ap, const char *format);
int					ft_put_nbr_rec(int nb);
int					ft_putnbr_base(unsigned int nb, char *base);
void				ft_putnbr_base_p(unsigned long int nb,
char *base, unsigned int base_len);
void				ft_print_utf8(unsigned int codepoint);
int					len_wchar(unsigned int c);
int					ft_putnbr_long_base(unsigned long int nb, char *base);

extern t_func g_tab[NB_FLAGS];

#endif
