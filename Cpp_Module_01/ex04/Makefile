# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egun <egun@student.42istanbul.com.tr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/15 21:53:05 by egun              #+#    #+#              #
#    Updated: 2023/03/31 15:51:24 by egun             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sedv2

SRCS = main.cpp SedV2.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)
	
$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

test: all clean
	$(CC) $(CFLAGS) filegenerator.cpp -o filegenerator
	./filegenerator
	@echo
	@./$(NAME) "test.txt" "Hello" "Hi"
	@make clean

clean:
	@$(RM)  $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) filegenerator
	@$(RM) test.txt
	@$(RM) test.txt.replace

re: fclean all

.PHONY: all clean fclean re run
