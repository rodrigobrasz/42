# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 12:17:12 by rodcaeta          #+#    #+#              #
#    Updated: 2025/10/17 15:10:01 by rodcaeta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS = $(SRC:srcs/%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(HEADS)
HEADS = includes/
RM = rm -f

all: $(NAME)

$(NAME) : 
	$(CC) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJS)
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all