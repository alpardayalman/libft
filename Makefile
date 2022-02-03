# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 22:49:43 by ayalman           #+#    #+#              #
#    Updated: 2022/02/03 18:28:40 by ayalman          ###   ########.Tr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
					ft_lstclear.c ft_lstiter.c ft_lstmap.c 

OBJS = $(SRCS:.c=.o)

BOBJS = $(BSRCS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
		@echo "\n--> Compiling is complete"
clean: 
		$(RM) $(OBJS) $(BOBJS)
		@echo "\n--> Clensed"
fclean: clean
		$(RM) $(NAME)
		@echo "\n--> FULL CLENSED"
re: fclean all

bonus: $(OBJS) $(BOBJS)
		ar rcs $(NAME) $(OBJS) $(BOBJS)
		@echo "\n--> ALP COMPILED"

.PHONY: all clean fclean re bonus
