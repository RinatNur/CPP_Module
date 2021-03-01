NAME = megaphone

SRC = megaphone.cpp

OBJ = $(patsubst %.cpp,%.o,$(SRC))

HEADER =    minishell.h ./functional/processing.h ./gnl/get_next_line.h\
            ./parser/parse.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
