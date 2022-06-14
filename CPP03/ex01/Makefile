NAME = ScavTrap
FLAGS = -Wall -Werror -Wextra
CC = c++
SRC = main.cpp ScavTrap.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(NAME)

re: fclean all