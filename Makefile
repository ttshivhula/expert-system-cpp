# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/17 10:29:57 by ttshivhu          #+#    #+#              #
#    Updated: 2017/10/17 10:29:58 by ttshivhu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = expert_system

SRC = main.cpp reader.cpp solver.cpp get_next_line.cpp list.cpp list2.cpp algorithm.cpp \

FLAG = -g3 -Wall -Werror -Wextra

SILENT = --no-print-directory

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
$(NAME):
	@make -C libft $(SILENT)
	@g++ $(FLAG) -c $(SRC)
	@g++ $(FLAG) $(OBJ)  libft/libft.a -lreadline -o $(NAME)
	@printf "\x1b[32mCompiling the AI 👽\x1b[0m\n"
	@printf "\x1b[32mCompiled $(NAME) 😜\x1b[0m\n"

clean:
	@make clean -C libft $(SILENT)
	@/bin/rm -f $(OBJ) $(LOBJ) *.o
	@printf "\x1b[31mRemoved object files\x1b[0m\n"

fclean: clean
	@/bin/rm -f $(NAME)
	@make fclean -C libft $(SILENT)
	@printf "\x1b[31mRemoved $(NAME)\x1b[0m\n"

re: fclean all
