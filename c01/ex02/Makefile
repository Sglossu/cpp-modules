NAME		=	string

CC			=	c++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror
RM			=	rm -f

SRCS		=	main.cpp
OBJS		=	$(SRCS:.cpp=.o)

.PHONY		:	all clean fclean re

%.o			:	%.cpp
				$(CC) $(CFLAGS) -c -o $@ $<

$(NAME)		:	$(OBJS)
				$(CC) $(OBJS) -o $(NAME)

all			:	$(NAME)

clean		:
				$(RM) $(OBJS)

fclean		:	clean
				$(RM) $(NAME)


re:				fclean all
