# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 07:55:22 by talsaiaa          #+#    #+#              #
#    Updated: 2023/08/01 07:58:04 by talsaiaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	ex02

SRCS		=	main.cpp Array.tpp

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	c++

CXXFLAGS	=	-std=c++98 -Wall -Wextra -Werror

RM			=	rm -rf

%.o : %.cpp %.tpp
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