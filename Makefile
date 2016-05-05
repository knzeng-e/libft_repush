# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/17 16:35:36 by knzeng-e          #+#    #+#              #
#    Updated: 2016/04/25 17:04:13 by knzeng-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_PATH = ./srcs/
SRC_NAME = $(shell ls $(SRC_PATH) | grep .c)
INC_PATH = -I./includes/
OBJ_PATH = ./obj/
OBJ_NAME = $(SRC_NAME:.c=.o)
	SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
	OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

CC = gcc

FLAGS = -c -Wall -Werror -Wextra

all	: $(NAME)

$(NAME) : $(OBJ)
	@echo "Compile all .c files"
	@echo "Linking all .o files and obtain libft binary"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || echo '' > /dev/null
	@gcc $(FLAGS) $(INC_PATH) -o $@ -c $<

clean : all
	@echo "Remove all .o files"
	@rm $(OBJ)
	@rmdir $(OBJ_PATH)

fclean : clean
	@echo "removing $(NAME)"
	@rm $(NAME)

norme :
	norminette $(INC_PATH) $(SRC_PATH)

re : fclean
	@make all

.PHONY : all clean fclean norme re
