NAME =  Polymorphism

SRCS =	./main.cpp ./Cat.cpp ./Dog.cpp ./Animal.cpp ./WrongCat.cpp ./WrongAnimal.cpp

OBJS = $(SRCS:.cpp=.o)

CPPFLAGS = -Werror -Wextra -Wall -std=c++98

CPP = c++

all: $(NAME)

%.o : %.cpp 
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re