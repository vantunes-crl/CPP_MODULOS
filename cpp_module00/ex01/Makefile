NAME = phonebook

SRCS = book.cpp test.cpp format.cpp get_info.cpp

CMP = clang++

OBJS = $(SRCS:.cpp=.o)

NAME: $(OBJS)
	$(CMP) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(OBS) $(NAME)