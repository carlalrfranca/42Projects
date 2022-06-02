# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 01:33:36 by cleticia          #+#    #+#              #
#    Updated: 2022/01/11 14:57:16 by cleticia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

RM = rm -rf

FLAGS = -Wall -Wextra -Wextra

OBJS = $(SRC:.c=.o)

SRC = src/check_sort.c src/check_stack.c src/simplify_numbers.c \
	  src/actions_utils.c src/actions.c src/push_swap_utils.c \
	  src/check_errors.c src/check_nodes.c src/push_swap.c \

LFT = ./src/libft/libft.a

LIB = -L ./src/libft/ -lft

INC = -I ../inc/push_swap.h -I  ./src/libft

all: $(NAME)

$(NAME): $(OBJS) $(LFT)
	@$(CC) $(FLAGS) $(OBJS) $(INC) $(LIB) -o $@
	@echo "Push_swap compile!"

$(LFT):
	@echo "Compiling libft..."
	@make -s -C ./src/libft
	@echo "Libft ready!"

.c.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
	@make -s $@ -C ./src/libft
	@$(RM) $(OBJS)
	@echo "Clean done!"

fclean:
	@$(RM) $(NAME) $(OBJS)
	@make -s $@ -C ./src/libft
	@echo "All binary files deleted!"

re: fclean all

.PHONY: all clean fclean re
