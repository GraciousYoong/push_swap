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
BONUS			= checker

#	Compilation
CC				= cc
CFLAGS 			= -Wall -Wextra -Werror
RM 				= rm -rf

#	Directories
PUSH_SWAP_DIR		= push_swap_dir/
OBJ_DIR				= push_swap_dir/obj/
CHECKER_DIR			= checker_dir/
CHECKER_OBJ_DIR		= checker_dir/obj/
STACK_DIR			= $(PUSH_SWAP_DIR)stack/
PARSING_DIR			= $(PUSH_SWAP_DIR)parsing/
OPERATIONS_DIR		= $(PUSH_SWAP_DIR)operations/
ALGORITHM_DIR		= $(PUSH_SWAP_DIR)algorithm/

#	Libraries
LIBFT_DIR			= libft
LIBFT				= $(LIBFT_DIR)/libft.a

#	Includes
INC					= -I $(PUSH_SWAP_DIR)

#	Source Files
MAIN				=	$(PUSH_SWAP_DIR)main.c

STACK				=	$(STACK_DIR)init_stack.c \
						$(STACK_DIR)stack_utils.c 

PARSING				= 	$(PARSING_DIR)split_arg.c \
						$(PARSING_DIR)input_checking.c \
						$(PARSING_DIR)free_and_error.c 

OPERATIONS			= 	$(OPERATIONS_DIR)rotate.c \
						$(OPERATIONS_DIR)reverse_rotate.c \
						$(OPERATIONS_DIR)push.c \
						$(OPERATIONS_DIR)swap.c

ALGORITHM			= 	$(ALGORITHM_DIR)init_nodes.c \
						$(ALGORITHM_DIR)init_nodes_utils.c \
						$(ALGORITHM_DIR)move_nodes.c \
						$(ALGORITHM_DIR)push_til_three.c \
						$(ALGORITHM_DIR)sort_big.c \
						$(ALGORITHM_DIR)sort_tiny.c

CHECKER				= 	$(CHECKER_DIR)checker.c \
						$(CHECKER_DIR)get_next_line.c \
						$(CHECKER_DIR)get_next_line_utils.c

#	Concatenate all source files
PUSH_SWAP			= $(MAIN) $(STACK) $(PARSING) $(OPERATIONS) $(ALGORITHM)
OBJ					= $(patsubst $(PUSH_SWAP_DIR)%.c,$(OBJ_DIR)%.o,$(PUSH_SWAP))
CHECKER_OBJ			= $(patsubst $(CHECKER_DIR)%.c,$(CHECKER_OBJ_DIR)%.o,$(CHECKER))
COMMON_SRC			= $(STACK) $(PARSING) $(OPERATIONS) $(ALGORITHM)
COMMON_OBJ			= $(patsubst $(PUSH_SWAP_DIR)%.c,$(OBJ_DIR)%.o,$(COMMON_SRC))

#	Rules

all:				$(NAME)

$(LIBFT):
					@make -C $(LIBFT_DIR)

$(NAME):			$(OBJ) $(LIBFT)
					$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

$(BONUS): 			$(COMMON_OBJ) $(CHECKER_OBJ) $(LIBFT)
					$(CC) $(CFLAGS) $(INC) $(COMMON_OBJ) $(CHECKER_OBJ) $(LIBFT) -o $(BONUS)

$(OBJ_DIR)%.o:		$(PUSH_SWAP_DIR)%.c
					mkdir -p $(@D)
					$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(CHECKER_OBJ_DIR)%.o:	$(CHECKER_DIR)%.c
						mkdir -p $(@D)
						$(CC) $(CFLAGS) $(INC) -c $< -o $@

bonus: 				$(BONUS)

clean:
					$(RM) $(OBJ_DIR) $(CHECKER_OBJ_DIR)
					@make clean -C $(LIBFT_DIR)

fclean:				clean
					$(RM) $(NAME) $(BONUS)
					@make fclean -C $(LIBFT_DIR)

re:					fclean all

.PHONY:				all clean fclean re bonus
