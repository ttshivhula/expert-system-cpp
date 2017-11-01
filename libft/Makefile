# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/31 12:28:51 by ttshivhu          #+#    #+#              #
#*   Updated: 2017/08/06 18:23:24 by ttshivhu         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memset.cpp ft_bzero.cpp ft_memccpy.cpp ft_memcpy.cpp ft_memmove.cpp ft_memchr.cpp ft_memcmp.cpp \
	   ft_strlen.cpp ft_strdup.cpp ft_strcpy.cpp ft_strncpy.cpp ft_strcat.cpp ft_strncat.cpp \
	   ft_strlcat.cpp ft_strchr.cpp ft_strrchr.cpp ft_strstr.cpp ft_strnstr.cpp ft_strcmp.cpp \
	   ft_strncmp.cpp ft_atoi.cpp ft_isalpha.cpp ft_isdigit.cpp ft_isalnum.cpp ft_isascii.cpp \
	   ft_isprint.cpp ft_toupper.cpp ft_tolower.cpp ft_memalloc.cpp ft_memdel.cpp ft_strnew.cpp \
	   ft_strdel.cpp ft_strclr.cpp ft_striter.cpp ft_striteri.cpp ft_strmap.cpp ft_strmapi.cpp \
	   ft_strequ.cpp ft_strnequ.cpp ft_strsub.cpp ft_strjoin.cpp ft_strtrim.cpp ft_strsplit.cpp \
	   ft_itoa.cpp ft_putchar.cpp ft_putstr.cpp ft_putendl.cpp ft_putnbr.cpp ft_putchar_fd.cpp \
	   ft_putstr_fd.cpp ft_putendl_fd.cpp ft_putnbr_fd.cpp ft_lstnew.cpp ft_lstdelone.cpp wide.cpp \
	   ft_lstdel.cpp ft_lstadd.cpp ft_lstiter.cpp ft_lstmap.cpp ft_swap.cpp ft_putnchar.cpp ft_itoa_base.cpp \

FLAG = -Wall -Werror -Wextra

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):
	@g++ $(FLAG) -c $(SRCS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
