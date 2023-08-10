# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 07:55:22 by talsaiaa          #+#    #+#              #
#    Updated: 2023/08/10 15:39:08 by talsaiaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	ex02

SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	c++

CXXFLAGS	=	-std=c++98 -Wall -Wextra -Werror

RM			=	rm -rf

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re