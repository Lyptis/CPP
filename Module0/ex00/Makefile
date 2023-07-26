# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 00:23:19 by cbernot           #+#    #+#              #
#    Updated: 2023/07/26 13:58:54 by svanmeen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
SRCS	=	megaphone.cpp

CC			=	c++
OBJS 		=	${SRCS:.c=.o}
FLAGS		=	-Wall -Wextra -Werror -std=c++98

%.o: %.c
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
