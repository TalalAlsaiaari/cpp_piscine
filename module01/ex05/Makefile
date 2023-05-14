# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 17:32:45 by talsaiaa          #+#    #+#              #
#    Updated: 2023/05/14 17:36:12 by talsaiaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	main

SRCS	=	main.cpp Harl.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		=	c++

FLAGS	=	-std=c++98 -Wall -Wextra -Werror

RM		=	rm -rf

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

.PHONY : all clean fclean re