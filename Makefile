NAME = ft_printf.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRCS = ft_putnbr.c ft_putchar.c ft_putstr.c ft_putunsigned.c \
      ft_puthexa.c ft_putaddress.c ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all