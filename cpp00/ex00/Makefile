# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asacchin <asacchin@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/13 13:48:27 by asacchin          #+#    #+#              #
#    Updated: 2024/07/13 13:48:27 by asacchin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJ = ${SRC:.cpp=.o}

CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++11

rm = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	$(rm) $(OBJ)

fclean: clean
	$(rm) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re