# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 12:02:24 by rodcaeta          #+#    #+#              #
#    Updated: 2025/11/03 16:55:01 by rodcaeta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_atoi.c ft_strlen.c \
		ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_toupper.c \
		ft_tolower.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_memcmp.c\
		ft_memchr.c ft_strlcpy.c ft_strdup.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_substr.c ft_strjoin.c

OBJS = $(patsubst %.c, %.o, $(FILES))

CC = cc
FLAGS = -Wall -Werror -Wextra -I.
RM = rm -r

all : $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Libft.a has been Created."
	
%.o : %.c
	@$(CC) $(FLAGS) -c -I. $< -o $@

clean: 
	@$(RM) $(OBJS) 
	@echo "Deleted all your Objects files."

fclean: clean
	@$(RM) $(NAME) a.out
	@echo "Your Libft.a has been Deleted."
	

re : fclean all

PHONY : clean fclaen all
