NAME = megaphone

CFLAGS = -Wall -Werror -std=c++98

SRCS = *.cpp

${NAME} :
			@clang++ ${CFLAGS} ${SRCS} -o ${NAME}

all :		${NAME}

clean : 	
			@rm -rf ${NAME}

fclean :	clean
			@rm -rf ${NAME}

re :		fclean all

.PHONY :	all clean fclean