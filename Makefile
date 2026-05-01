NAME = libft.a
SRCS = $(wildcard srcs/*.c)
INCDIR = includes/
CC = cc
FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o:
	$(CC) $(FLAGS) -I $(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

re:fclean all

bonus:all

.PHONY:all clean fclean re
