# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/13 23:32:31 by marvin            #+#    #+#              #
#    Updated: 2021/01/13 23:32:31 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

NAME = sed

HEADER = sed.h

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
