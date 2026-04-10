# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/09 11:25:04 by apinho-a          #+#    #+#              #
#    Updated: 2026/04/10 15:31:02 by apinho-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	./srcs/ft_putchar.c \
		./srcs/ft_putstr.c \
		./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c \
		./srcs/ft_swap.c

CC = cc -Wall -Werror -Wextra -I ./includes

RM = rm --force

OBJS =	./srcs/ft_putchar.o \
		./srcs/ft_putstr.o \
		./srcs/ft_strcmp.o \
		./srcs/ft_strlen.o \
		./srcs/ft_swap.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $<

$(OBJS): $(SRC)
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all