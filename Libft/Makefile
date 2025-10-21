# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 12:02:24 by rodcaeta          #+#    #+#              #
#    Updated: 2025/10/21 13:28:47 by rodcaeta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_isalpha.c  ft_isascii.c ft_isdigit.c ft_isprint.c ft_atoi.c ft_strlen.c ft_strncmp.c

OBJS = $(patsubst %.c, %.o, $(FILES))

CC = cc
FLAGS = -Wall -Werror -Wextra -I.
RM = rm -r

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
%.o : %.c
	$(CC) $(FLAGS) -c -I. $< -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

PHONY : clean fclaen all
