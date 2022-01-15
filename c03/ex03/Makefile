NAME		=	diamond

CC			=	c++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror -Wshadow -Wno-shadow
RM			=	rm -f

HEAD		=	ClapTrap.hpp	ScavTrap.hpp	FragTrap.hpp	DiamondTrap.hpp
SRCS		=	main.cpp	ClapTrap.cpp	ScavTrap.cpp	FragTrap.cpp	DiamondTrap.cpp
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
