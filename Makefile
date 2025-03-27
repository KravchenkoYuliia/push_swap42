# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yukravch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 11:35:15 by yukravch          #+#    #+#              #
#    Updated: 2025/03/27 16:11:40 by yukravch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBS = library/libft/libft.a
CC = cc

all: $(NAME)

SRC_DIR = sources
INC_DIR = -I includes -I library/libft/includes
OBJ_DIR = objects

FILES = main.c error_check.c exit.c swap.c push.c rotate.c reverse_rotate.c
CFLAGS = -Wall -Werror -Wextra -g3 $(INC_DIR)

OBJ = $(addprefix $(OBJ_DIR)/, $(FILES:.c=.o))
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(LIBS)
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)

$(LIBS):
	make -C library/libft

clean:
	rm -rf $(OBJ_DIR)
fclean:
	rm -f $(NAME)
re: fclean all
