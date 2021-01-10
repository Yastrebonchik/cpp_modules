# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexander <alexander@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/08 22:24:27 by alexander         #+#    #+#              #
#    Updated: 2021/01/09 18:04:58 by alexander        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

NAME = crappyphonebook

HEADER = phonebook.h

FLAGS = -Wall -Werror -Wextra

SOURCES = main.cpp contact.cpp

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