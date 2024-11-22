# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duha <duha@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 16:56:04 by duha              #+#    #+#              #
#    Updated: 2024/11/22 03:45:25 by duha             ###   ########.fr        #
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

TEST_SRC = test.c
TEST_OBJ = $(TEST_SRC:.c=.o)
TEST_EXEC = test_exec

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(TEST_EXEC)
	./$(TEST_EXEC)

$(TEST_EXEC): $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(TEST_OBJ) -L. -lftprintf -o $(TEST_EXEC)

.PHONY: all clean fclean re test
