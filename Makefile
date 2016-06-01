# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/20 17:10:01 by apellegr          #+#    #+#              #
#    Updated: 2016/06/01 17:36:12 by apellegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	ft_printf
NAMEBASE    =   $(shell basename $(NAME))
LENGTHNAME	=	`printf "%s" $(NAMEBASE) | wc -c`
MAX_COLS	=	$$(echo "$$(tput cols)-24-$(LENGTHNAME)"|bc)

CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror

SRCDIR		=	srcs/
OBJDIR		=	objs/
INCDIR		=	includes/
LIBFT_DIR	=	libft/
LIBFT_LIB	=	$(LIBFT_DIR)libft.a

SRCBASE		=	\
				flag.c														\
				flag_char.c													\
				flag_int.c													\
				ft_printf.c													\
				main.c														\
				utils.c

SRCS		=	$(addprefix $(SRCDIR), $(SRCBASE))
INCS		=	$(addprefix $(INCDIR), $(INCBASE))
OBJS		=	$(addprefix $(OBJDIR), $(SRCBASE:.c=.o))

.SILENT:

all:		$(NAME)
	echo "\033[38;5;44m☑️  ALL    $(NAMEBASE) is done\033[0m\033[K"

$(NAME):	$(OBJDIR) $(OBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS) $(LIBFT_LIB)
	echo "\r\033[38;5;22m📗  MAKE   $(NAMEBASE)\033[0m\033[K"
	echo "\r\033[38;5;184m👥  GROUP MEMBER(S):\033[0m\033[K"
	echo "\r\033[38;5;15m`cat auteur | sed s/^/\ \ \ \ -/g`\033[0m\033[K"

$(OBJDIR):
	mkdir -p $(OBJDIR)
	mkdir -p $(dir $(OBJS))

$(OBJDIR)%.o : $(SRCDIR)%.c | $(OBJDIR)
	$(CC) $(FLAGS) -MMD -c $< -o $@											\
		-I $(LIBFT_DIR)$(INCDIR)											\
		-I $(INCDIR)
	printf "\r\033[38;5;11m⌛  MAKE   %s plz wait ...%*s\033[0m\033[K"		\
		$(NAMEBASE) $(MAX_COLS) "($@)"

clean:
	printf "\r\033[38;5;11m⌛  CLEAN  $(NAMEBASE) plz wait ...\033[0m\033[K"
	if [[ `rm -R $(OBJDIR) &> /dev/null 2>&1; echo $$?` == "0" ]]; then		\
		echo "\r\033[38;5;124m📕  CLEAN  $(NAMEBASE)\033[0m\033[K";			\
	else																	\
		printf "\r";														\
	fi

fclean:		clean
	printf "\r\033[38;5;11m⌛  FCLEAN $(NAMEBASE) plz wait ...\033[0m\033[K"
	if [[ `rm $(NAME) &> /dev/null 2>&1; echo $$?` == "0" ]]; then			\
		echo "\r\033[38;5;124m📕  FCLEAN $(NAMEBASE)\033[0m\033[K";			\
	else																	\
		printf "\r";														\
	fi

fcleanlib:	fclean
	make -C $(LIBFT_DIR) fclean

re:			fclean all

relib:		fclean fcleanlib all

.PHONY:		fclean fcleanlib clean re relib

-include $(OBJS:.o=.d)
