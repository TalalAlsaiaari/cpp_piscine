# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/09 20:10:06 by talsaiaa          #+#    #+#              #
#    Updated: 2023/08/09 20:10:23 by talsaiaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	mutant

SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	c++

CXXFLAGS	= -std=c++98 -Wall -Wextra -Werror

RM			=	rm -rf

%.o: %.cpp
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