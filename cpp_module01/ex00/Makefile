NAME = zumbis

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS = $(SRCS:.cpp=.o)

NAME: $(OBJS)
	clang++ $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(OBS) $(NAME)
