NAME = megaphone

CMP = clang++

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	$(CMP) $(OBJS) $(FLAGS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)
re: clean all