# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 00:23:19 by svanmeen          #+#    #+#              #
#    Updated: 2024/02/11 13:37:07 by svanmeen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brain
SRCS	=	main.cpp		\
			Dog.cpp			\
			Cat.cpp			\
			Animal.cpp		\
			Brain.cpp		\
			WrongAnimal.cpp \
			WrongCat.cpp	\
			WrongDog.cpp	\

I_DIR	=	include/

INC		=	${I_DIR}Animal.hpp \
			${I_DIR}Brain.hpp \
			${I_DIR}Cat.hpp \
			${I_DIR}Dog.hpp \
			${I_DIR}WrongAnimal.hpp \
			${I_DIR}WrongCat.hpp \
			${I_DIR}WrongDog.hpp \

CC			=	c++
OBJS 		=	${SRCS:.cpp=.o}
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -I ${I_DIR}

%.o: %.cpp ${INC}
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
