# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 00:23:19 by cbernot           #+#    #+#              #
#    Updated: 2023/09/08 15:31:20 by svanmeen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
SRCS	=	main.cpp
I_DIR	=	inc/

CC			=	c++
OBJS 		=	${SRCS:.cpp=.o}
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -g

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
