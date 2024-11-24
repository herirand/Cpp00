# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: herirand <herirand@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/24 20:14:20 by herirand          #+#    #+#              #
#    Updated: 2024/11/24 20:26:20 by herirand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCS = Contact.cpp PhoneBook.cpp main.cpp

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

re : clean all

.PHONY : all clean fclean re