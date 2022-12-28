#The Target Binary Program
NAME	:= libft.a

#The Directories, Source, Includes, Objects, Binary and Resources
SRCDIR	:= ./srcs/
OBJDIR	:= ./obj/

#Flags, Libraries and Includes
CC		:= cc
FLAGS	:= -Wall -Wextra -Werror
INC		:= -c -I .h

SRC		:=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c	\
			ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c	\
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c	\
			ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c	\
			ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c	\
			get_next_line_utils.c get_next_line.c ft_print_digit.c ft_print_hex.c ft_print_percentage.c	\
			ft_print_pointer.c ft_print_unsigned_num.c ft_printf_tools.c ft_printf.c ft_lstdelone_bonus.c	\
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c	\
			ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstlast_bonus.c	\
			ft_printf.c
OBJ 	:=	ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o	\
			ft_isprint.o ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o	\
			ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strchr.o	\
			ft_strdup.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o	\
			ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o	\
			get_next_line_utils.o get_next_line.o ft_print_digit.o ft_print_hex.o ft_print_percentage.o	\
			ft_print_pointer.o ft_print_unsigned_num.o ft_printf_tools.o ft_printf.o ft_lstdelone_bonus.o	\
			ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o ft_lstnew_bonus.o ft_lstadd_front_bonus.o	\
			ft_lstsize_bonus.o ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstlast_bonus.o	\
			ft_printf.o

BONUS_SRCS :=	$(SRC)
BONUS_OBJ :=	$(OBJ)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(INC) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

re: fclean all

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f $(BONUS_OBJ)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(BONUS_OBJ)

bonus: $(BONUS_SRCS)
		$(CC) $(FLAGS) $(INC) $(BONUS_SRCS)
		ar rc $(NAME) $(BONUS_OBJ)
		ranlib $(NAME)
