NAME = ft_printf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

SRC = ft_putnbr.c ft_putchar.c ft_putstr.c ft_putunsigned.c \
		ft_puthexa.c ft_putaddress.c

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean