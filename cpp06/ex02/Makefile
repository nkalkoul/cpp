SRCS =	$(addprefix srcs/, Base.cpp A.cpp B.cpp C.cpp functions.cpp main.cpp)
CXX =	c++ -Wall -Werror -Wextra -std=c++98 -g3 -Iinclude
NAME =	identify
OBJS =	$(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS)  -o $(NAME)
	@echo "done !"

%.o : %.cpp
	@$(CXX) -c $< -o $@
	@echo "compiling: $<"

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all