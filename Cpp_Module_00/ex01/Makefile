# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erengun <erengun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/15 21:53:05 by egun              #+#    #+#              #
#    Updated: 2023/03/30 16:48:34 by erengun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = Contact.cpp PhoneBook.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)
	
$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

run: all
	@clear
	@./$(NAME)
	make fclean

clean:
	@$(RM)  $(OBJS)

fclean: clean
	@clear
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re run
