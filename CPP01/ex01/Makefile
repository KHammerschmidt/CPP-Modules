CC := c++
NAME := zombieHorde
FLAGS := -Wall -Wextra -Werror -std=c++98
SRC := main.cpp Zombie.cpp zombieHorde.cpp
HEADERS := Zombie.hpp

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

no: $(SRC) $(HEADERS)
	@$(CC) $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
