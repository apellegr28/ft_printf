# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/17 13:07:55 by apellegr          #+#    #+#              #
#    Updated: 2016/06/08 16:52:25 by apellegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	libftprintf.a

NAMEBASE    =   $(shell basename $(NAME) .a)

LENGTHNAME	=	`printf "%s" $(NAMEBASE) | wc -c`

MAX_COLS	=	$$(echo "$$(tput cols)-24-$(LENGTHNAME)"|bc)

CC			=	clang

FLAGS		=	-Wall -Wextra -Werror

SRCDIR		=	srcs/

OBJDIR		=	objs/

INCDIR		=	includes/

SRCBASE		=	\
				_bonus/ft_lstadd.c											\
				_bonus/ft_lstdel.c											\
				_bonus/ft_lstdelone.c										\
				_bonus/ft_lstiter.c											\
				_bonus/ft_lstmap.c											\
				_bonus/ft_lstnew.c											\
				_part1/ft_atoi.c											\
				_part1/ft_bzero.c											\
				_part1/ft_isalnum.c											\
				_part1/ft_isalpha.c											\
				_part1/ft_isascii.c											\
				_part1/ft_isdigit.c											\
				_part1/ft_isprint.c											\
				_part1/ft_memccpy.c											\
				_part1/ft_memchr.c											\
				_part1/ft_memcmp.c											\
				_part1/ft_memcpy.c											\
				_part1/ft_memmove.c											\
				_part1/ft_memset.c											\
				_part1/ft_strchr.c											\
				_part1/ft_strcmp.c											\
				_part1/ft_strcpy.c											\
				_part1/ft_strdup.c											\
				_part1/ft_strlcat.c											\
				_part1/ft_strlen.c											\
				_part1/ft_strncat.c											\
				_part1/ft_strncmp.c											\
				_part1/ft_strncpy.c											\
				_part1/ft_strnstr.c											\
				_part1/ft_strrchr.c											\
				_part1/ft_strstr.c											\
				_part1/ft_tolower.c											\
				_part1/ft_toupper.c											\
				_part2/ft_itoa.c											\
				_part2/ft_memalloc.c										\
				_part2/ft_memdel.c											\
				_part2/ft_putchar.c											\
				_part2/ft_putchar_fd.c										\
				_part2/ft_putendl.c											\
				_part2/ft_putendl_fd.c										\
				_part2/ft_putnbr.c											\
				_part2/ft_putnbr_fd.c										\
				_part2/ft_putstr.c											\
				_part2/ft_putstr_fd.c										\
				_part2/ft_strcat.c											\
				_part2/ft_strclr.c											\
				_part2/ft_strdel.c											\
				_part2/ft_strequ.c											\
				_part2/ft_striter.c											\
				_part2/ft_striteri.c										\
				_part2/ft_strjoin.c											\
				_part2/ft_strmap.c											\
				_part2/ft_strmapi.c											\
				_part2/ft_strnequ.c											\
				_part2/ft_strnew.c											\
				_part2/ft_strsplit.c										\
				_part2/ft_strsub.c											\
				_part2/ft_strtrim.c											\
				get_next_line.c												\
				math/ft_abs.c												\
				math/ft_max.c												\
				math/ft_min.c												\
				printf/flag.c												\
				printf/flag_char.c											\
				printf/flag_conversion.c									\
				printf/flag_int.c											\
				printf/flag_long.c											\
				printf/flag_p.c												\
				printf/ft_printf.c											\
				printf/utils.c												\
				printf/utilsbis.c											\
				tableau/ft_strlistdel.c										\
				tableau/ft_strlistlen.c

SRCS		=	$(addprefix $(SRCDIR), $(SRCBASE))

OBJS		=	$(addprefix $(OBJDIR), $(SRCBASE:.c=.o))

.SILENT:

all:
	make -j $(NAME)

$(NAME):	$(OBJDIR) $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	echo "\r\033[38;5;25m📘  MAKE   $(NAMEBASE)\033[0m\033[K"

$(OBJDIR):
	mkdir -p $(OBJDIR)
	mkdir -p $(dir $(OBJS))

$(OBJDIR)%.o : $(SRCDIR)%.c | $(OBJDIR)
	$(CC) $(FLAGS) -MMD -c $< -o $@											\
		-I $(INCDIR)
	printf "\r\033[38;5;11m%s%*.*s\033[0m\033[K"							\
		"⌛  MAKE   "$(NAMEBASE)" plz wait ..."								\
		$(MAX_COLS) $(MAX_COLS) "($(@))"

clean:
	if [[ `rm -R $(OBJDIR) &> /dev/null 2>&1; echo $$?` == "0" ]]; then		\
		echo -en "\r\033[38;5;124m📕  CLEAN  $(NAMEBASE)\033[0m\033[K";		\
	else																	\
		printf "\r";														\
	fi

fclean:		clean
	if [[ `rm $(NAME) &> /dev/null 2>&1; echo $$?` == "0" ]]; then			\
		echo -en "\r\033[38;5;124m📕  FCLEAN $(NAMEBASE)\033[0m\033[K";		\
	else																	\
		printf "\r";														\
	fi

re:			fclean all

.PHONY:		fclean clean re

-include $(OBJS:.o=.d)
