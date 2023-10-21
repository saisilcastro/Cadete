NAME = get_next_line
VPATH = src: ./
SRC_MANDATORY = get_next_line.c \
				get_next_line_utils.c
SRC = $(SRC_MANDATORY) \
	  main.c
OBJ = obj
SRCOBJ = $(SRC:%.c=${OBJ}/%.o)
ifneq ($(OS), Windows_NT)
	CREATE = mkdir -p $(1)
	REMOVE = rm -rf $(1)
endif

all: $(NAME)
$(NAME): $(SRCOBJ)
	$(CC) $^ -o $(NAME)
${OBJ}/%.o : %.c
	$(call CREATE, ${OBJ})
	$(CC) -c $< -o $@
clean:
	$(call REMOVE, ${OBJ}/*.o)
fclean: clean
	$(call REMOVE, ${NAME})
re: fclean all