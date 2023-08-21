NAME = philo
INCLUDE = -I./
SRC = utils.c \
	  philo-status.c \
	  action-of.c \
	  philo.c \
	  chained-of.c \
	  timer-of.c \
	  life.c \
	  life-action.c \
	  main.c
OBJ = ./obj/
SRCOBJ = $(SRC:%.c=${OBJ}%.o)
CFLAG = -Wall -Wextra -Werror
ENGINE = -pthread

all: $(NAME)
$(NAME): $(SRCOBJ)
	$(CC) $^ -o $(NAME) $(ENGINE) $(CFLAG)
${OBJ}%.o : %.c
	mkdir -p ${OBJ}
	$(CC) -c $< -o $@ $(INCLUDE) $(CFLAG)
clean:
	rm -rf *.o
fclean: clean
	rm -rf $(NAME)
re: fclean all