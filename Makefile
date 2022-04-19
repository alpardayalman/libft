# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 22:49:43 by ayalman           #+#    #+#              #
#    Updated: 2022/04/14 15:24:27 by ardayalman       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
INCLUDES	=	include/
SRC_DIR 	=	source/
OBJ_DIR		=	object/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs

#Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#Sources

MAIN_DIR	=	ft_lib/
_MAIN_		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint \
				ft_bzero ft_calloc ft_memchr ft_memcmp ft_memmove ft_memset \
				ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_atoi \
				ft_itoa ft_tolower ft_toupper ft_split ft_strchr ft_strdup \
				ft_striteri ft_strjoin \
				ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp \
				ft_strnstr ft_strrchr ft_strtrim ft_substr ft_putstr_color_fd\

#EXTRA_DIR	=	extra/ "extra directories"
#EXTRA		=	"extra functions" you can add as many functions as you need.

MATH_DIR	= 	ft_math/
_MATH_		= 	ft_factorial ft_fib ft_isprime ft_power ft_quick ft_abs ft_comdiv

BONUS_DIR	=	bonus/
_BONUS_		=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

PRINTF_DIR	=	ft_printf/
_PRINTF_	=	ft_outils ft_printf ft_count ft_printf_hex_high ft_printf_hex_low \
				ft_printf_pointer ft_printf_string ft_putnbr

GNL_DIR		=	ft_gnl/
_GNL_		=	get_next_line

SRC_FILES+=$(addprefix $(MAIN_DIR),$(_MAIN_))
#SRC_FILES+=$(addprefix $(EXTRA_DIR),$(EXTRA))
SRC_FILES+=$(addprefix $(MATH_DIR),$(_MATH_))
SRC_FILES+=$(addprefix $(PRINTF_DIR),$(_PRINTF_))
SRC_FILES+=$(addprefix $(GNL_DIR),$(_GNL_))
BONUS_FILES+=$(addprefix $(BONUS_DIR),$(_BONUS_))

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
BONUS_OBJ	= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(BONUS_FILES)))


###

OBJF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)
			@ranlib $(NAME)
			@echo "$(GREEN)--> Protocol compiled.$(DEF_COLOR)"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJF)
			@echo "$(YELLOW)--> Compiling: $< $(DEF_COLOR)"
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)
			@mkdir -p $(OBJ_DIR)$(MAIN_DIR)
#			@mkdir -p $(OBJ_DIR)$(EXTRA_DIR)
			@mkdir -p $(OBJ_DIR)$(MATH_DIR)
			@mkdir -p $(OBJ_DIR)$(PRINTF_DIR)
			@mkdir -p $(OBJ_DIR)$(GNL_DIR)
			@mkdir -p $(OBJ_DIR)$(BONUS_DIR)

bonus:		$(BONUS_OBJ)
			@$(AR) $(NAME) $(BONUS_OBJ)
			@echo "$(GREEN)--> Bonus Objectives are compiled.$(DEF_COLOR)"

clean:
			@$(RM) -rf $(OBJ_DIR)
			@$(RM) -f $(OBJF)
			@echo "$(RED)--> Files clensed.$(DEF_COLOR)"

fclean:		clean
			@$(RM) -f $(NAME)
			@echo "$(RED)--> Executable files clensed.$(DEF_COLOR)"

re:			fclean all
			@echo "$(GREEN)--> Protocol rebuilt.$(DEF_COLOR)"

norm:
			@norminette $(SRC) $(INCLUDES) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm
