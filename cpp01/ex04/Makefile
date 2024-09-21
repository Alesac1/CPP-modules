NAME = file

CC = c++
FLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = ./main.cpp

OBJ = $(SRC:.cpp=.o)

CLR_RMV := \033[0m
RED := \033[1;31m
GREEN := \033[1;32m
YELLOW := \033[1;33m
BLUE := \033[1;34m
CYAN := \033[1;36m

$(NAME): $(OBJ)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		@echo "\n $(GREEN)Zombieland Completed$(CLR_RMV)\n"

clean:
		@rm -f $(OBJ)
		@echo "\n $(RED)Zombieland destryed$(CLR_RMV)\n"

fclean: clean
		@rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re--