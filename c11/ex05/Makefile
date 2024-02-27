NAME = do-op

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c caculation.c ft_atoi.c
OBJS = $(SRCS:.c=.o)
INCLUDES = ./ft.h

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -I $(INCLUDES) $(OBJS) -o $@

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean:
	@make clean
	@rm -f $(NAME)

.PHONY : all clean