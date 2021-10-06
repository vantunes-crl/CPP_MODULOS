NAME = phonebook

SRCS = get_info.cpp main_phone.cpp textFormat.cpp debug.cpp

CMP = clang++

OBJS = $(SRCS:.cpp=.o)

NAME: $(OBJS)
	$(CMP) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean:
	rm -f $(OBS) $(NAME)