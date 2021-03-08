NAME = replace

SRC =  main.cpp

OBJ = $(patsubst %.cpp,%.o,$(SRC))

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAGS) $(SRC) -o $(NAME)

#%.o: %.c $(HEADER)
#	gcc $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

mclean: all clean

.PHONY: all clean fclean re mclean
