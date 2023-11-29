# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 13:01:54 by svanmeen          #+#    #+#              #
#    Updated: 2023/11/29 13:01:56 by svanmeen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	reference
SRCS	=	main.cpp
I_DIR	=	inc/

CC			=	c++
OBJS 		=	${SRCS:.cpp=.o}
FLAGS		=	-Wall -Wextra -Werror -std=c++98

%.o: %.cpp
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
