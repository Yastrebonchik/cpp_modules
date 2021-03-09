# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 17:38:03 by kcedra            #+#    #+#              #
#    Updated: 2021/02/04 18:09:33 by kcedra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

NAME = array

FLAGS = -Wall -Werror -Wextra

SOURCES = main.cpp Fixed.cpp

O_FILES = $(SOURCES:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(O_FILES)
	$(CC) $(FLAGS) $(O_FILES) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all