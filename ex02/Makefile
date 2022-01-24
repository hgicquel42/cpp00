NAME = bank

INPUT = tests.cpp Account.cpp

OUTPUT = ${INPUT:.cpp=.o}

all: ${NAME}

.c.o:	
	c++ -Wall -Wextra -Werror -std=c++98 -g -c $< -o ${<:.c=.o}

${NAME}: ${OUTPUT}
	c++ -Wall -Wextra -Werror -std=c++98 -g ${OUTPUT} -o ${NAME}

clean:
	rm -f ${OUTPUT}

fclean:	clean
	rm -f ${NAME}

re:		fclean all

test: $(NAME)
	./${NAME}