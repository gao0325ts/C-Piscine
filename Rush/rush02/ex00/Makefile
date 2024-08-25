CC  = cc
CFLAGS    = -Wall -Wextra -Werror
SRCS    = $(wildcard *.c)
OBJS    = $(SRCS:.c=.o)
NAME	= rush-02

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	-rm -f $(OBJS)
fclean:
	make clean
	rm -f $(NAME)
re: fclean all