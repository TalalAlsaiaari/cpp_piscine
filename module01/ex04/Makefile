# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/13 14:15:57 by talsaiaa          #+#    #+#              #
#    Updated: 2023/05/14 16:41:51 by talsaiaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	main

SRCS	=	main.cpp StringReplace.cpp

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
	$(RM) $(NAME) *.replace

re : fclean all

.PHONY : all clean fclean re