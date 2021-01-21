# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 17:38:03 by kcedra            #+#    #+#              #
#    Updated: 2021/01/20 23:50:04 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

NAME = convert

FLAGS = -Wall -Werror -Wextra

SOURCES = convert.cpp

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