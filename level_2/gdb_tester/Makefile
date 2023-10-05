APP = main
SRC = main.c
OBJ = obj
OBJSRC = $(SRC:%.c=${OBJ}/%.o)
FLAG = -g
ifneq ($(OS), Windows_NT)
	CREATE = mkdir -p $(1)
	REMOVE = rm -rf $(1)
endif

all: $(APP)
$(APP): $(SRCOBJ)
${OBJ}/%.o : %.c
	$(call CREATE, ${OBJ})
	$(CC) -c $< -o $@ $(FLAG)
clean:
	$(call REMOVE, ${OBJ}/*.o)
fclean: clean
	$(call REMOVE, ${APP})
re: fclean all