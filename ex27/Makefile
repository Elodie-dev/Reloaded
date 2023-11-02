CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = main.c

OBJS = $(SRCS:.c=.o)

NAME = ft_display_file

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) 

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean