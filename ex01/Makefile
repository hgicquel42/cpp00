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
	c++ -Wall -Wextra -Werror -std=c++98 -g -c $< -o $@

${NAME}: dst/ ${OUTPUT}
	c++ -Wall -Wextra -Werror -std=c++98 -g ${OUTPUT} -o ${NAME}

clean:
	rm -rf dst/

fclean:	clean
	rm -f ${NAME}

re: fclean all