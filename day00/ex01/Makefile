NAME = phonebook

SRC =  main.cpp contact.class.cpp phonebook.class.cpp

OBJ = $(patsubst %.cpp,%.o,$(SRC))

HEADER =  contact.class.hpp phonebook.class.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(FLAGS) $(SRC) -o $(NAME)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

make_clean: all clean

.PHONY: all clean fclean re
