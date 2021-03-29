NAME = convert

SRC = main.cpp Convert.cpp

OBJ = $(patsubst %.cpp,%.o,$(SRC))

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp
			clang++ $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

mclean: all clean

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re mclean