NAME = easyfind

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

%.o: %.cpp
	clang++ ${FLAGS} -c $< -o $@

$(NAME): $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all