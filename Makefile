NAME = libftprintf.a
SRC = ft_printf.c
OBJ = ft_printf.o
UTILS = utils/print_str.c utils/print_num.c utils/print_hex.c
UOBJS = $(UTILS:%.c=%.o)
FLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(UOBJS) $(OBJ)
	ar rcs $(NAME) $(UOBJS) $(OBJ)

$(UOBJS): $(UTILS)
	cc $(FLAGS) -c $< -o $@

$(OBJ): $(SRC)
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(UOBJS)
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all