# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexander <alexander@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 17:38:03 by kcedra            #+#    #+#              #
#    Updated: 2021/01/08 22:19:23 by alexander        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

NAME = megaphone

FLAGS = -Wall -Werror -Wextra

SOURCES = megaphone.cpp

O_FILES = $(SOURCES:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(O_FILES)
	$(CC) $(FLAGS) $(O_FILES) -o megaphone

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all