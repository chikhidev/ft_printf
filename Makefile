NAME = libftprintf.a
SRC = ft_printf.c
OBJ = ft_printf.o
UTILS_DIR = utils
UTILS_F = print_hex.c print_num.c print_str.c
UOBJS = $(UTILS_DIR)/$(UTILS_F:%.c=%.o)
FLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(UOBJS) $(OBJ)
	ar rcs $(NAME) $(UOBJS) $(OBJ)

$(UTILS_DIR)/%.o: $(UTILS_DIR)/%.c
	cc $(FLAGS) -c $< -o $@

$(OBJ): $(SRC)
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(UOBJS) $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all