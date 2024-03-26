# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 00:23:19 by svanmeen          #+#    #+#              #
#    Updated: 2024/03/26 08:19:51 by svanmeen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	easyfind
SRCS	=	main.cpp \

I_DIR	=	include/
INC		=	${I_DIR}easyfind.hpp

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
