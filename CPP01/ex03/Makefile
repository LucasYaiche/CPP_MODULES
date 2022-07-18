NAME = Human

CXXFLAGS = -Wall -Werror -std=c++98

SRCS = *.cpp

${NAME} :
			@clang++ ${CXXFLAGS} ${SRCS} -o ${NAME}

all :		${NAME}

clean : 	
			@rm -rf ${NAME}

fclean :	clean
			@rm -rf ${NAME}

re :		fclean all

.PHONY :	all clean fclean re