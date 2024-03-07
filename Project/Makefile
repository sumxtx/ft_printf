# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 23:15:51 by smoraes-          #+#    #+#              #
#    Updated: 2024/03/07 14:00:15 by smoraes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc
NAME	= libftprintf.a
ARCS	= ar crs
CFLAGS	= -Wall -Werror -Wextra
SRCS	= ft_printf.c
OBJS	= $(SRCS:.c=.o)
MAIN	= ../Main/main.c
RM	= rm -rf
BIN	= ../printf

all: $(NAME)

$(NAME): $(OBJS)
	$(ARCS) $(NAME) $(OBJS)

%.o:%.c ft_printf.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

bin: $(OBJS) $(NAME) $(MSRC) $(MOBJ)
	$(CC) $(CFLAGS) $(MAIN) $(NAME) $(LIBA) -o $(BIN)

dbg: all
	$(CC) -g $(SRCS) $(LIBA)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(BIN)

re: fclean all

.PHONY: all clean fclean re dbg
