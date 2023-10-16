APP = cub3D
VPATH = src: ./src/common
SRC_COMMON = math-of.c \
			 place-set.c \
			 place-run.c \
			 machine.c \
			 mouse-of.c
SRC = $(SRC_COMMON) \
	  main.c
OBJ = obj
SRCOBJ = $(SRC:%.c=${OBJ}/%.o)
LIB = -L./MLX42/lib
ENGINE = -lmlx42 -ldl -lglfw -pthread -lm
INCLUDE = -I./MLX42/include \
		  -I./include/common
ifneq ($(OS), Windows_NT)
	CREATE = mkdir -p $(1)
	REMOVE = rm -rf $(1)
endif

all: $(APP)
$(APP): $(SRCOBJ)
	$(CC) $^ $(LIB) $(ENGINE) $(INCLUDE) -o $(APP)
${OBJ}/%.o : %.c
	$(call CREATE,$(OBJ))
	$(CC) -c $< -o $@ $(INCLUDE)
clean:
	$(call REMOVE,$(OBJ)/*.o)
fclean: clean
	$(call REMOVE,${APP})
re: fclean all