# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stenner <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/17 13:35:09 by stenner           #+#    #+#              #
#    Updated: 2019/05/27 14:38:50 by stenner          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INC = includes/libft.h
SRC = srcs/*.c
SRCO = *.o
EXEC = a.out
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(SRCO)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

ffclean: fclean
	rm -f $(EXEC)

re:	ffclean all
