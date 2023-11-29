# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 13:02:51 by svanmeen          #+#    #+#              #
#    Updated: 2023/11/29 13:02:53 by svanmeen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fixed
SRCS	=	main.cpp \
			Fixed.cpp \

I_DIR	=	include/
INC		= ${I_DIR}Fixed.hpp

CC			=	c++
OBJS 		=	${SRCS:.cpp=.o}
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -I ${I_DIR}

%.o: %.cpp	${INC}
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
