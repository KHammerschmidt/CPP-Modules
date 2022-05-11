NAME = violence

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(NAME)

re: flcean all
