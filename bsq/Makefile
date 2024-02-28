NAME = bsq

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
INCLUDES = ./bsq.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I $(INCLUDES) $(OBJS) -o $@

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	make clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re