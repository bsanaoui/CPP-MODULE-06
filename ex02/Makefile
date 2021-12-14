NAME = IdentifyType

CC = clang++
FLAGS = -Werror -Wextra -Wall

SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(SRC) $(FLAG) -o $(NAME)

fclean : clean
	@rm -f $(NAME)

clean :

re : fclean all