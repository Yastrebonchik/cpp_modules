# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/13 23:32:31 by kcedra            #+#    #+#              #
#    Updated: 2021/01/22 15:56:18 by kcedra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

NAME = sed

HEADER = sed.h

FLAGS = -Wall -Werror -Wextra

SOURCES = main.cpp

O_FILES = $(SOURCES:.cpp=.o)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(O_FILES)
	$(CC) $(FLAGS) $(O_FILES) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
