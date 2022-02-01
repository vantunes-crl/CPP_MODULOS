NAME  = execForm

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp  RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
