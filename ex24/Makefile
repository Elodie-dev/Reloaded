CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC_DIR = srcs
INC_DIR = includes

SRCS = $(SRC_DIR)/ft_putchar.c \
	$(SRC_DIR)/ft_putstr.c \
	$(SRC_DIR)/ft_strcmp.c \
	$(SRC_DIR)/ft_strlen.c \
	$(SRC_DIR)/ft_swap.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re