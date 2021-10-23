NAME = Brain

SRCS = main.cpp

FLAGS =  -Wall -Wextra -Werror

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	clang++ $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all