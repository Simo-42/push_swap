# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 21:19:28 by ncolomer          #+#    #+#              #
#    Updated: 2023/03/01 10:15:45 by mhajji-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =   ft_sort_int_tab.c \
		list_function.c \
		lowest_sort.c \
		parsing.c \
		parsing_2.c \
		pretri.c \
		move.c \
		bigtri.c \
		move_bigtri.c \
		push_swap.c \
		free_function.c \
		
OBJ = $(SRC:.c=.o)

CC = gcc $(CFLAGS)
RM = rm -f
CFLAGS = -g -Wall -Wextra -Werror

NAME = push_swap

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re