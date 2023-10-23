# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 00:23:19 by cbernot           #+#    #+#              #
#    Updated: 2023/10/22 12:23:18 by svanmeen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
SRCS	=	main.cpp \
			ClapTrap.cpp \
			ScravTrap.cpp \

I_DIR	=	include/

CC			=	c++
OBJS 		=	${SRCS:.cpp=.o}
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -I ${I_DIR}

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
