# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 23:15:51 by smoraes-          #+#    #+#              #
#    Updated: 2024/03/08 03:36:47 by smoraes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc
NAME	= libftprintf.a
ARCS	= ar crs
CFLAGS	= -Wall -Werror -Wextra
SRCS	= ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_puthex_frmt.c\
				ft_put_uint.c ft_puthex_frmt_mayus.c
OBJS	= $(SRCS:.c=.o)
RM	= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(ARCS) $(NAME) $(OBJS)

%.o:%.c ft_printf.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(BIN)

re: fclean all

.PHONY: all clean fclean re
