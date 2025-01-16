NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = src/formats/ft_print_c.c src/formats/ft_print_d_i.c \
	src/formats/ft_print_percent.c src/formats/ft_print_x.c \
	src/formats/ft_print_u.c src/formats/ft_print_s.c \
	src/formats/ft_print_p.c src/utils/ft_putnbr.c \
	src/utils/ft_putstr.c src/utils/ft_rev_str.c \
	src/utils/ft_strlcpy.c src/utils/ft_strlen.c \
	src/utils/ft_put_x.c src/utils/ft_putchar.c \
	src/utils/ft_put_p.c src/ft_printf.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $^

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re