# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/27 17:46:04 by gyoong            #+#    #+#              #
#    Updated: 2026/03/24 04:19:20 by gyoong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
CC = cc
CFLAGS = -Wextra -Werror -Wall
AR = ar rcs
SRC = checker.c \
		get_next_line.c \
		get_next_line_utils.c \
			
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ) $(Bonus_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus