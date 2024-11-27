# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 13:41:08 by herirand          #+#    #+#              #
#    Updated: 2024/11/27 14:08:52 by herirand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCS = Account.cpp tests.cpp

OBJS = ${SOURCS:.cpp=.o}

%.o : %.cpp
	c++ ${FLAGS} -c $< -o $@

all : ${NAME}

${NAME} : ${OBJS}
	c++ ${FLAGS} ${OBJS} -o $@

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all re fclean clean 
