NAME = megaphone

INPUT = megaphone.cpp

OUTPUT = ${INPUT:.cpp=.o}

all: ${NAME}

.c.o:	
	c++ -Wall -Wextra -Werror -g -c $< -o ${<:.c=.o}

${NAME}: ${OUTPUT}
	c++ -Wall -Wextra -Werror -g ${OUTPUT} -o ${NAME}

clean:
	rm -f ${OUTPUT}

fclean:	clean
	rm -f ${NAME}

re:		fclean all

test: $(NAME)
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone