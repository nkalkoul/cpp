SRCS =	main.cpp ZombieHorde.cpp Zombie.cpp
CC =	c++ -Wall -Werror -Wextra -std=c++98 -g3
NAME =	Zombie
OBJS =	$(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS)  -o $(NAME)
	@echo "done !"

%.o : %.c
	@$(CC) -c $< -o $@
	#echo "compiling: $<"

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all
