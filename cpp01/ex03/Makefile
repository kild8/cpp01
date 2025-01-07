NAME = Unnecessary_violence
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all