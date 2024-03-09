# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstuart <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 11:03:03 by pstuart           #+#    #+#              #
#    Updated: 2022/03/30 11:03:05 by pstuart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_printf.c srcs/ft_printnumbers.c srcs/ft_printp.c srcs/ft_printhex.c
LIBFT = ./libft/
LIBFT_A = ./libft/libft.a
OBJS = $(SRCS:.c=.o)

%o: %.c
	gcc -c $(FLAGS) -g -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp $(LIBFT_A) $(NAME)
	ar -rcs $(NAME) $(OBJS)
	
all: $(NAME)

clean:
	make clean -C $(LIBFT)
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) $(LIBFT_A)

re: fclean all

.PHONY: all, clean, fclean, re
