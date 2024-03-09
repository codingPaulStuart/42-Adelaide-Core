# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstuart <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 13:43:12 by pstuart           #+#    #+#              #
#    Updated: 2022/03/11 13:43:15 by pstuart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Sources ------------------------------------------------

SRC_CHAR_FUNCTIONS = ft_isalpha.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_isspace.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_islower.c \
	ft_isupper.c

SRC_MEM_FUNCTIONS = ft_calloc.c \
	ft_bzero.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_memccpy.c

SRC_STR_FUNCTIONS = ft_strdup.c \
	ft_strlen.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdlen.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strnew.c

SRC_CONVERSIONS = ft_atoi.c \
	ft_itoa.c

SRC_PRINT = ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \

SRCS = $(SRC_CHAR_FUNCTIONS) \
	$(SRC_MEM_FUNCTIONS) \
	$(SRC_STR_FUNCTIONS) \
	$(SRC_PRINT) \
	$(SRC_CONVERSIONS) \

# Bonus List Functions ------------------------------------------------

SRC_LIST_FUNCTIONS = ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c

# Variables ------------------------------------------------

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -f

OBJECT = $(SRCS:.c=.o)
BONUS_SRCS = $(SRC_LIST_FUNCTIONS)
BONUS_OBJ = $(BONUS_SRCS:.c=.o)
	
# Rules ------------------------------------------------

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) -I . -c $(SRCS)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

bonus:
	$(CC) $(CFLAGS) -I . -c $(SRCS) $(BONUS_SRCS)
	ar rc $(NAME) $(OBJECT) $(BONUS_OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJECT) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
