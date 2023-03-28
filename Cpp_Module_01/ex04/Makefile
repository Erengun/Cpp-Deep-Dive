# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erengun <erengun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/15 21:53:05 by shovsepy          #+#    #+#              #
#    Updated: 2023/03/28 17:14:44 by erengun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sedv2

SRCS = main.cpp SedV2.cpp
OBJS = $(SRCS:.cpp=.o)

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

clean:
	@$(RM)  $(OBJS)
fclean: clean
	@$(RM) $(NAME)
	w@$(RM) filegenerator
	@$(RM) test.txt
	@$(RM) test.txt.replace

re: fclean all

.PHONY: all clean fclean re run
