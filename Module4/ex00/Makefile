# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 00:23:19 by svanmeen          #+#    #+#              #
#    Updated: 2023/10/03 15:08:09 by svanmeen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
SRCS	=	main.cpp		\
			Dog.cpp			\
			Cat.cpp			\
			Animal.cpp		\
			WrongAnimal.cpp	\
			WrongCat.cpp	\
			WrongDog.cpp	\

I_DIR	=	include/

CC			=	c++
OBJS 		=	${SRCS:.cpp=.o}
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -g -I ${I_DIR}

%.o: %.cpp
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJS} 
	${CC} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
