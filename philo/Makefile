# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 18:29:05 by nazisken          #+#    #+#              #
#    Updated: 2024/03/04 15:57:18 by nazisken         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= philo

CC = gcc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

SRC = main.c \
		argument_control.c \
		utils.c \
		threads_start.c \
		create.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -c $(SRC)
		$(CC) $(FLAGS) -o $(NAME) $(SRC)

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)
re: fclean all

r: re
f: fclean
c: clean

.phony: all clean fclean re