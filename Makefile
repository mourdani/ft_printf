# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 23:53:36 by mourdani          #+#    #+#              #
#    Updated: 2021/10/14 02:51:10 by mourdani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra 

SRC = ft_printf.c \
	ft_pointer.c \
	ft_hex.c \
	ft_unsigned.c \
	ft_number.c ft_utils.c \
 	

OBJ = $(SRC:%.c=%.o)


$(NAME): $(OBJ)
	gcc $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
