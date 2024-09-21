NAME = Polymorphism

CC = c++
FLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = class/Animal.cpp class/cat.cpp class/Dog.cpp class/WrongCat.cpp main.cpp class/WrongAnimal.cpp class/Brain.cpp

OBJ = $(SRC:.cpp=.o)

CLR_RMV := \033[0m
RED := \033[1;31m
GREEN := \033[1;32m
YELLOW := \033[1;33m
BLUE := \033[1;34m
CYAN := \033[1;36m

$(NAME): $(OBJ)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		@echo "\n $(GREEN)Animal Compiled$(CLR_RMV)\n"

clean:
		@rm -f $(OBJ)
		@echo "\n $(RED)Animal destryed$(CLR_RMV)\n"

fclean: clean
		@rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re