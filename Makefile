NAME = libftprintf.a

LIBFT = libft.a

LIBFTDIR = ./libft

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = src/ft_printf.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $^

$(NAME): $(LIBFT) $(OBJ)
	ar rcs $(NAME) $(LIBFT) $(OBJ)

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
