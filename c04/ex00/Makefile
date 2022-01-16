NAME		=	ex00

CC			=	c++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror
RM			=	rm -f

HEAD		=	Cat.hpp		Dog.hpp		Animal.hpp	WrongAnimal.hpp		WrongCat.hpp
SRCS		=	main.cpp	Cat.cpp		Dog.cpp		Animal.cpp			WrongCat.cpp	WrongAnimal.cpp
OBJS		=	$(SRCS:.cpp=.o)

.PHONY		:	all clean fclean re

%.o			:	%.cpp
				$(CC) $(CFLAGS) -c -o $@ $<

$(NAME)		:	$(OBJS) $(HEAD)
				$(CC) $(OBJS) -o $(NAME)

all			:	$(NAME)

clean		:
				$(RM) $(OBJS)

fclean		:	clean
				$(RM) $(NAME)


re:				fclean all
