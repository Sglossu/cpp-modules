NAME		=	phonebook

CC			=	c++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror
RM			=	rm -f

HEAD		=	User.hpp	phonebook.hpp
SRCS		=	main.cpp	User.cpp	 commands.cpp	ft_atoi.cpp
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
