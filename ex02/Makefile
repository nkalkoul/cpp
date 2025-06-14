SRCS =	Account.cpp
CC =	c++ -Wall -Werror -Wextra -std=c++98
NAME =	phonebook
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
