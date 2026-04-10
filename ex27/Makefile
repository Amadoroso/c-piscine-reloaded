# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/10 14:47:24 by apinho-a          #+#    #+#              #
#    Updated: 2026/04/10 15:41:54 by apinho-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ft_display_file

SRC := ./main_file.c
OBJ := ./main_file.o

CC = cc -Wall -Werror -Wextra
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ): $(SRC)
	$(CC) -c $(SRC) -o $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)