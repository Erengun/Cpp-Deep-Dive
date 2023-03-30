NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98


all: $(NAME)
	c++ $(CXXFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	@clear
	./$(NAME) "shhhhh... I think the students are asleep..."
	@echo
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@echo
	./$(NAME)
	@make fclean

.PHONY: all clean fclean re