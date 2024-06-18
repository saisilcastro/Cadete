ifneq ($(OS),Windows_NT)
	CREATE = mkdir -p $(1)
	REMOVE = rm -rf $(1)
else
	NAME = calculate.exe
	CC = gcc
	CREATE = mkdir -p $(1)
	REMOVE = rm -rf $(1)
endif
INCLUDE = -I./include
VPATH = src: ./src
SRC =	util.c \
		main.c
OBJ = obj
SRCOBJ = $(SRC:%.c=${OBJ}/%.o)

all: $(NAME)
$(NAME) : $(SRCOBJ)
	$(CC) $^ -o $(NAME)
${OBJ}/%.o : %.c
	$(call CREATE,${OBJ})
	$(CC) -c $< -o $@ $(INCLUDE)
clean:
	$(call REMOVE,${OBJ})
fclean: fclean
	$(call REMOVE,${NAME})
re: fclean all