NAME = agenda
FILES = main contact book
SRC = $(addsuffix .cpp, $(FILES))
OBJ = $(addsuffix .o, $(FILES))
CC = clang++

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	@echo "Compiling: $<"
	@$(CC) -c $< -o $@

clean:
	@$(RM) -rf *.o *.dSYM
	@echo "Objects cleaned!"

fclean: clean
	@$(RM) $(NAME)
	@echo "Executable cleaned!"

re: fclean all

.PHONY: all clean fclean re