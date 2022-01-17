NAME = phonebook

INPUT = \
	main.cpp \
	PhoneBook.cpp \
	Contact.cpp

OUTPUT = ${addprefix dst/, ${INPUT:.cpp=.o}}

all: ${NAME}

dst/:
	mkdir dst/

dst/%.o: src/%.cpp
	c++ -Wall -Wextra -Werror -g -c $< -o $@

${NAME}: dst/ ${OUTPUT}
	c++ -Wall -Wextra -Werror -g ${OUTPUT} -o ${NAME}

clean:
	rm -rf dst/

fclean:	clean
	rm -f ${NAME}

re: fclean all