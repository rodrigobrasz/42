# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 12:02:24 by rodcaeta          #+#    #+#              #
#    Updated: 2025/11/05 14:33:24 by rodcaeta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_atoi.c ft_strlen.c  \
		ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_toupper.c  \
		ft_tolower.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_memcmp.c \
		ft_memchr.c ft_strlcpy.c ft_strdup.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_substr.c ft_strjoin.c ft_itoa.c ft_strtrim.c ft_putnbr_fd.c \
		ft_strmapi.c

BFILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone\
		ft_lstclear.c ft_lstiter.c ft_lstmap.c 

OBJS = $(patsubst %.c, %.o, $(FILES))
BOBJS = $(patsubst %.c, %.o, $(BFILES))
EXECS = find . -type f -executable -print -delete

CC = cc
FLAGS = -Wall -Werror -Wextra -I.
RM = rm -r

#COLLORS ANSI =

GREEN = \033[0;32m # 
RED = \033[0;31m #
BLUE = \033[0;34m #
YELLOW = \033[0;33m #
RESET = \033[0m #

all : $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)Building library:$(RESET) $(BLUE)$(NAME)$(RESET)"

%.o : %.c
	@echo "$(YELLOW)Compiling:$(RESET) $(BLUE)$<$(RESET)"
	@$(CC) $(FLAGS) -c -I. $< -o $@

clean: 
	@$(RM) $(OBJS) 
	@echo "$(RED)Deleted all your Objects files.$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Your Libft.a has been Deleted.$(RESET)"

cclean: 
	@$(EXECS)
	@echo "$(RED)Find and deleted all your executables files$(RESET)"
	

re : fclean all

PHONY : clean fclaen all re
