# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yukravch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 11:35:15 by yukravch          #+#    #+#              #
#    Updated: 2025/03/24 12:57:44 by yukravch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBS = library/libft_full_library/libft.a
CC = cc

all: $(NAME)

SRC_DIR = sources
INC_DIR = includes
OBJ_DIR = objects

FILES = main.c
CFLAGS = -Wall -Werror -Wextra -g3 -I $(INC_DIR)

OBJ = $(addprefix $(OBJ_DIR)/, $(FILES:.c=.o))
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(LIBS)
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)

$(LIBS):
	make -C library/libft_full_library

clean:
	rm -rf $(OBJ_DIR)
fclean:
	rm -f $(NAME)
re: fclean all
