NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCS = megaphone.cpp

OBJS = ${SOURCS:.cpp=.o}

%.o : %.c
	c++ ${FLAGS} -cpp $< -o $@

all : ${NAME}

${NAME} : ${OBJS}
	c++ ${FLAGS} ${OBJS} -o $@

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re