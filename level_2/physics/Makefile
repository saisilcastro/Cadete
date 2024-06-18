APP = app
SRC = main.c
OBJ = obj
SRCOBJ = $(SRC:%.c=${OBJ}/*.o)
ENGINE = -lm
ifneq ($(OS), Windows_NT)
	CREATE_DIR = mkdir -p $(1)
	REMOVE = rm -rf $(1)
endif

all: $(APP)
$(APP): $(SRCOBJ)
	$(CC) $^ -o $(APP) $(ENGINE)
${OBJ}/%.o : %.c
	$(call CREATE_DIR, ${OBJ})
	$(CC) -c $< -o $@
clean:
	$(call REMOVE, $(OBJ)/*.o)
fclean: clean
	$(call REMOVE, $(APP))
re: fclean all
.PHONY: all clean fclean re