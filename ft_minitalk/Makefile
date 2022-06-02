# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 16:44:29 by cleticia          #+#    #+#              #
#    Updated: 2021/11/30 22:24:28 by cleticia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	server
CLIENT		=	client
CC			=	gcc
RM			=	rm -rf
FLAGS		=	-Wall -Werror -Wextra -D_POSIX_C_SOURCE=199309L
LFT			=	./src/libft/libft.a
INC			=	-I ./src -I ./src/libft
LIB			=	-L ./src/libft/ -lft
SRC_CLIENT	=	./src/client.c 
SRC_SERVER	=	./src/server.c 
OBJ_SERVER	=	$(SRC_SERVER:.c=.o)
OBJ_CLIENT	=	$(SRC_CLIENT:.c=.o)

all: $(LFT) $(CLIENT) $(NAME)

$(NAME):	$(OBJ_SERVER) $(LFT)
	@$(CC) $(FLAGS) $(INC) $(LIB) $^ -o $@
	@echo "Server successfully build."

$(CLIENT):	$(OBJ_CLIENT) $(LFT)
	@$(CC) $(FLAGS) $(INC) $(LIB) $^ -o $@
	@echo "Client successfully build."

.c.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(LFT):
	@echo	"Compiling libft..."
	@make	-s -C ./src/libft
	@echo	"Libft ready!"

clean:
	@make -s $@ -C ./src/libft
	@$(RM)	$(OBJ_CLIENT)
	@$(RM)	$(OBJ_SERVER)

fclean: clean
	@$(RM)	$(CLIENT) $(NAME)
	@make -s $@ -C ./src/libft
	@echo "Binary files deleted!"

re: fclean all

.PHONY: all clean fclean re
