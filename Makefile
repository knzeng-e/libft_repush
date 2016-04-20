# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/17 16:35:36 by knzeng-e          #+#    #+#              #
#    Updated: 2016/04/21 00:16:11 by knzeng-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_PATH = ./srcs/
SRC_NAME = $(shell ls $(SRC_PATH) | grep .c)
INC_PATH = ./includes/
OBJ_NAME = $(SRC_NAME:.c=.o)
	SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

CC = gcc

FLAGS = -c -Wall -Werror -Wextra

all	: $(NAME)

$(NAME)	: $(OBJ_PATH)
	@echo "Compile all .c files"
	@echo "Linking all .o files and obtain libft binary"
	@$(CC) $(FLAGS) -I $(INC_PATH) $(SRC)
	ar rc $(NAME) $(OBJ_NAME)
	ranlib $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@gcc $(FLAGS) -I $(INC_PATH) -o $@ -c $<

clean : all
	@echo "Remove all .o files"
	@rm $(OBJ_NAME)

fclean : clean
	rm $(NAME)

norme :
	norminette $(INC_PATH) $(SRC_PATH)

re : fclean all

.PHONY : all clean fclean norme re
