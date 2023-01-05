# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 10:18:43 by jshestov          #+#    #+#              #
#    Updated: 2023/01/05 16:09:19 by jshestov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g
RM 			= /bin/rm -f

INCS_DIR	= ./
LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

BUILD_DIR	= build
SRC_DIR		= ./
SRCS		= 	push_swap.c print_list.c stack_utilities.c

OBJS = $(SRCS:%.c=$(BUILD_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@echo "Linking $@"
	@$(CC) -o $(NAME) $(OBJS) $(LIBFT)
	@echo "Done!"

$(OBJS): $(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -I $(INCS_DIR) -I $(LIBFT_DIR) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)

clean:
	make clean -C $(LIBFT_DIR)
	$(RM) -r $(BUILD_DIR)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
