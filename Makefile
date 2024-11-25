# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duha <duha@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 16:56:04 by duha              #+#    #+#              #
#    Updated: 2024/11/26 01:31:03 by duha             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_printf.c \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_pointer.c \
		ft_print_decimal.c \
		ft_print_udecimal.c \
		ft_print_hex_lower.c \
		ft_print_hex_upper.c

OBJS = $(SRCS:.c=.o)

TEST_SRC = test_ft_printf.c
TEST_OBJ = $(TEST_SRC:.c=.o)
TEST_OUT = test_ft_printf.out

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS) $(TEST_OBJ) $(TEST_OUT)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(TEST_OUT)
	./$(TEST_OUT)

$(TEST_OUT): $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(TEST_OBJ) -L. -lftprintf -o $(TEST_OUT)
