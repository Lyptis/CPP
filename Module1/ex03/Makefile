# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 13:02:00 by svanmeen          #+#    #+#              #
#    Updated: 2023/11/29 13:02:02 by svanmeen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	humans
SRCS	=	main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp \

I_DIR	=	include/
INC		=	${I_DIR}HumanA.hpp \
			${I_DIR}HumanB.hpp \
			${I_DIR}Weapon.hpp

CC			=	c++
OBJS 		=	${SRCS:.cpp=.o}
FLAGS		=	-Wall -Wextra -Werror -std=c++98

%.o: %.cpp	${INC}
	${CC} ${FLAGS} -I ${I_DIR} -c $< -o $@

${NAME}: ${OBJS} 
	${CC} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
