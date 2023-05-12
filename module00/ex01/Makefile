# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 19:46:32 by talsaiaa          #+#    #+#              #
#    Updated: 2023/05/12 09:15:05 by talsaiaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FILES = PhoneBook.cpp Contact.cpp main.cpp

OBJS = $(FILES:.cpp=.o)

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

RM = rm -rf

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $^ -o $@
	
clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re