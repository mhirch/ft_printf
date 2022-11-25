# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 23:34:07 by mhirch            #+#    #+#              #
#    Updated: 2022/11/17 16:27:26 by mhirch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

CC = cc

FILES = ft_printf.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putnbr_base.c\
		ft_putstr.c

OBJ = $(FILES:.c=.o)

all: $(NAME)
$(NAME): $(HEADER) $(OBJ)
		ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) ${CFLAGS} $< -o $@ -c
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all