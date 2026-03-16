# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/09 12:08:11 by gyoong            #+#    #+#              #
#    Updated: 2026/03/09 12:08:11 by gyoong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Standard
NAME			= push_swap

#	Compilation
CC				= cc
CFLAGS 			= -Wall -Wextra -Werror
RM 				= rm -rf

#	Directories
INC_DIR				= inc/
PUSH_SWAP_DIR		= push_swap/
OBJ_DIR				= obj/
MAIN_DIR			= $(PUSH_SWAP_DIR)main/
PARSING_DIR			= $(PUSH_SWAP_DIR)parsing/
OPERATIONS_DIR		= $(PUSH_SWAP_DIR)operations/
ALGORITHM_DIR		= $(PUSH_SWAP_DIR)algorithm/

#	Libraries
LIBFT_DIR			= libft
LIBFT				= $(LIBFT_DIR)/libft.a

#	Includes
INC					= -I $(INC_DIR)

#	Source Files
MAIN				=	$(MAIN_DIR)initialize.c \
						$(MAIN_DIR)initialize_utils.c \
						$(MAIN_DIR)main.c \
						$(MAIN_DIR)main_utils.c

PARSING				= 	$(PARSING_DIR)parse_argument.c \
						$(PARSING_DIR)parse_utils.c \
						$(PARSING_DIR)parse_input.c \
						$(PARSING_DIR)parse_return_helpers.c

OPERATIONS			= 	$(OPERATIONS_DIR)rotate.c \
						$(OPERATIONS_DIR)rev_rotate.c \
						$(OPERATIONS_DIR)push.c \
						$(OPERATIONS_DIR)swap.c 

ALGORITHM			= 	$(ALGORITHM_DIR)cost.c \
						$(ALGORITHM_DIR)position.c \
						$(ALGORITHM_DIR)do_move.c \
						$(ALGORITHM_DIR)sort_utils.c \
						$(ALGORITHM_DIR)sort_stack.c \
						$(ALGORITHM_DIR)sort_three.c


#	Concatenate all source files
PUSH_SWAP			= $(MAIN) $(PARSING) $(OPERATIONS) $(ALGORITHM)
OBJ					= $(patsubst $(PUSH_SWAP_DIR)%.c,$(OBJ_DIR)%.o,$(PUSH_SWAP))

#	Rules
all: $(NAME)

start:
					@make all

$(LIBFT):
					@make -C $(LIBFT_DIR)

$(NAME):			$(OBJ) $(LIBFT) $(PRINTF)
					$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

$(OBJS_DIR)%.o:		$(PUSH_SWAP_DIR)%.c
					mkdir -p $(@D)
					$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
					$(RM) $(OBJ_DIR)
					@make clean -C $(LIBFT_DIR)

fclean:				clean
					$(RM) $(NAME)
					@make fclean -C $(LIBFT_DIR)

re:					fclean all

.PHONY:				start all clean fclean
