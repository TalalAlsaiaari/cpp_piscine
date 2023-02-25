# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 19:46:32 by talsaiaa          #+#    #+#              #
#    Updated: 2023/02/25 19:47:24 by talsaiaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_phonebook

FILES = phonebook.cpp

OBJS = $(FILES:.cpp=.o)

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

RM = rm -rf

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	
clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re