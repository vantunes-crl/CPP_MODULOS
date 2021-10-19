NAME = phonebook

SRCS = main.cpp utils.cpp format.cpp

OBJS = $(SRCS:.cpp=.o)

NAME: $(OBJS)
	clang++ $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(OBS) $(NAME)
