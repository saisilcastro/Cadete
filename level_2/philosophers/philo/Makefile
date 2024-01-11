ifneq ($(OS), Windows_NT)
	CREATE = mkdir -p $(1)
	REMOVE = rm -rf $(1)
	NAME = philo
endif
INCLUDE = ./
SRC = 	pl_atoul_base.c \
		timer.c \
		life-command.c \
		philo-timer-init.c \
		philo.c \
		main.c
OBJ = obj
SRCOBJ = $(SRC: %.c=${OBJ}/%.o)
FLAG = -Wall -Werror -Wextra
LIB = -pthread

all: $(NAME)
$(NAME): $(SRCOBJ)
	$(CC) $^ $(LIB) -I$(INCLUDE) -o $(NAME)
${OBJ}/%.o : %.c
	$(call CREATE,${OBJ})
	$(CC) -c $< -o $@ $(FLAG)
clean:
	$(call REMOVE,${OBJ}/*.o)
fclean: clean
	$(call REMOVE,${NAME})
re: fclean all