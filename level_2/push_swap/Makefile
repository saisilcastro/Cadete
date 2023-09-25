MAKEFLAGS += --silent
NAME = push_swap
INCLUDE = -I./include -I./ft_printf/include/
VPATH = src: ./src
SRC = ft_atol_base.c \
	  push-swap.c \
	  stack-of.c \
	  stack-next.c \
	  stack-message.c \
	  stack-search.c \
	  stack-check.c \
	  stack-rotate.c \
	  stack-sort.c \
	  sort-of.c \
	  sort-populate.c \
	  sort-push.c \
	  sort-little.c \
	  sort-index.c \
	  sort-radix.c \
	  sort-resolve.c \
	  sort-swap.c \
	  sort-rotate.c \
	  sort-reverse-rotate.c \
	  main.c
OBJ = ./obj/
SRCOBJ = $(SRC:%.c=${OBJ}%.o)
LIB = -L./ft_printf
CFLAG = -Wall -Wextra -Werror -g3
PRINTF = ft_printf.a

all: $(PRINTF)
$(PRINTF):
	$(MAKE) -C ./ft_printf
	$(MAKE) $(NAME)
$(NAME): $(SRCOBJ)
	$(CC) $? $(LIB) -lftprintf $(INCLUDE) -o $(NAME) $(CFLAG)
${OBJ}%.o : %.c
	mkdir -p "./obj"
	$(CC) -c $< -o $@ $(INCLUDE) $(CFLAG)
clean:
	rm -rf ./obj/*.o ./ft_printf/obj/*.o
fclean: clean
	rm -rf $(NAME) ./ft_printf/*.a
re: fclean all
.PHONY: all