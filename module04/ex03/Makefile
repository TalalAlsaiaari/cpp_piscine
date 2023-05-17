# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 19:00:54 by talsaiaa          #+#    #+#              #
#    Updated: 2023/05/17 19:25:56 by talsaiaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Materias

SRCS	=	main.cpp AMateria.cpp Cure.cpp Ice.cpp ICharacter.cpp IMateriaSource.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		=	c++

FLAGS	=	-g -std=c++98 -Wall -Wextra -Werror

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