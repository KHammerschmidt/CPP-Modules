NAME = materia
FLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp \
	MateriaSource.cpp IMateriaSource.cpp \
	Character.cpp ICharacter.cpp Ground.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(NAME)

re: fclean all