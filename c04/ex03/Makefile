NAME		=	ex03

CC			=	c++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror
RM			=	rm -f

HEAD		=	Amateria.hpp	Character.hpp	Cure.hpp		Ice.hpp		ICharacter.hpp	IMateriaSource.hpp	MateriaSoutce.hpp
SRCS		=	main.cpp		Amateria.cpp	Character.cpp	Cure.cpp	Ice.cpp			MateriaSoutce.cpp
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
