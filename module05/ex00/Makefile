# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 20:09:12 by talsaiaa          #+#    #+#              #
#    Updated: 2023/08/01 07:51:55 by talsaiaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Bureaucrats

SRCS		=	main.cpp Bureaucrat.cpp

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	c++

CXXFLAGS	=	-std=c++98 -Wall -Wextra -Werror

RM			=	rm -rf

%.o : %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CXXFLAGS) $^ -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re