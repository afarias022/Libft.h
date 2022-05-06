# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afarias- <afarias-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 17:34:27 by afarias-          #+#    #+#              #
#    Updated: 2022/05/03 20:20:06 by afarias-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_toupper.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c  \
		ft_memcmp.c  \
		ft_memcpy.c  \
		ft_memmove.c \
		ft_memset.c  \
		ft_strchr.c  \
		ft_strdup.c  \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c  \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BONUS = 	ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\

OBJECTS		= ${SRC:.c=.o}

BONUS_OBJECTS	= ${BONUS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
		sr rc $(NAME) $(OBJECTS)

$(OBJECTS): $(SRC)
		gcc $(CFLAGS) -c $(SRC)

$(BONUS_OBJECTS): $(SRC) $(BONUS)
		gcc $(CFLAGS) -c $(SRC) $(BONUS)

bonus: $(SRC) $(BONUS_OBJECTS)
				ar rc $(NAME) $(OBJECTS) $(BONUS_OBJECTS)

clean: 
		@rm -rf $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
		@rm -f $(OBJECTS) $(BONUS_OBJECTS) $(NAME)

re: fclean all

.PHONY: all clean fclean re name