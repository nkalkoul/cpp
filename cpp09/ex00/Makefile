SRCS =	main.cpp BitcoinExchange.cpp
CC =	c++  -std=c++98 -g3
NAME =	btc
OBJS =	$(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS)  -o $(NAME)
	@echo "done !"

%.o : %.cpp
	@$(CC) -c $< -o $@
	@echo "compiling: $<"

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all