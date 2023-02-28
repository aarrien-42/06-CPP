NAME = megaphone
SRC = megaphone.cpp
OBJ = *.o
CC = g++

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

%.o: %.c
	@echo "Compiling: $<"
	@$(CC) -c $< -o $@

clean:
	@$(RM) -rf $(OBJ) *.dSYM
	@echo "Objects cleaned!"

fclean: clean
	@$(RM) $(NAME)
	@echo "Executable cleaned!"

re: fclean all

.PHONY: all clean fclean re