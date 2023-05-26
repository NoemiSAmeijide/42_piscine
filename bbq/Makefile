# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 13:38:48 by nosilves          #+#    #+#              #
#    Updated: 2023/04/18 19:52:32 by nosilves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME= bsq
CFLAGS += -Wall -Werror -Wextra
SOURCE=$(wildcard *.c)
OBJ=$(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	cc $(OBJ) -o $(NAME)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

.PHONY: all fclean clean
