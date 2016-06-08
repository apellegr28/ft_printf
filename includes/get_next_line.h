/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 15:22:57 by apellegr          #+#    #+#             */
/*   Updated: 2016/05/11 15:23:01 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

typedef struct	s_gnlfd
{
	char			*buff;
	int				fd;
	int				length;
	int				offset;
	int				i;
	struct s_gnlfd	*next;
}				t_gnlfd;

# ifndef EOF
#  define EOF			-1
# endif

# define BUFFER_SIZE	512

# define GNL_SUCCES		1
# define GNL_EOF		0
# define GNL_ERROR		-1

int				get_next_line(int const fd, char **line);

#endif
