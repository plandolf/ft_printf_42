# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plandolf <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 10:31:06 by plandolf          #+#    #+#              #
#    Updated: 2023/05/31 10:31:06 by plandolf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

FILES := ft_printf.c ft_printf_utils.c ft_printf_utils_2.c ft_itoa_printf.c \
ft_printf_utils_3.c

OBJS := $(FILES:.c=.o)

CFLAGS := -Wall -Wextra -Werror

all:$(NAME)

$(NAME):$(OBJS)
	ar -rcs $@ $^

clean:
	rm -f *.o

fclean:clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
