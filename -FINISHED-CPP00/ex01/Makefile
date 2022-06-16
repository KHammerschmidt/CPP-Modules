NAME = phonebook
FLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
SRC = main.cpp PhoneBook.cpp Output.cpp Input.cpp Helper.cpp Contact.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(NAME)

re: fclean all
