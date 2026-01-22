NAME = Form

SRC = Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
      ShrubberyCreationForm.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra -O3 -std=c++98

%.o: %.cpp
	c++ $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

clear:
	@clear
	@make re
