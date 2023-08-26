NAME = cub3D
VPATH = src: ./src/common src: ./src/bonus src: ./src/mandatory ./src/plugin
SRC_FILE_COMMON = chained-of.c chained-next.c \
				map-valid-file.c \
				map-of.c \
				map-set.c \
				map-size.c \
				map-message-error.c \
				map-border-validator.c \
				map-flood-fill.c \
				map-validate.c \
				map-pop.c \
				math-of.c \
				linux-keyboard.c \
				linux-key-number.c \
				linux-key-a-to-l.c \
				linux-key-m-to-x.c \
				linux-key-y-to-stop.c \
				linux-key-tilde-to-pgdn.c \
				linux-key-left-to-pad7.c \
				linux-key-pad8-to-f5.c \
				linux-key-f6-to-f12.c \
				mouse-of.c \
				image-of.c \
				pixel-of.c \
				machine.c \
				machine-draw.c \
				place-set.c \
				place-key-get.c \
				place-image.c \
				place-image-load.c \
				place-object.c \
				place-object-collision.c \
				place-camera.c \
				place-map.c \
				place-block-move.c \
				place-draw-bg.c \
				place-draw.c \
				place-run.c \
				place-stop.c \
				place-destroy.c \
				place-pop.c \
				object-of.c \
				object-route.c \
				object-route-up.c \
				object-route-mid.c \
				object-route-down.c \
				object-collision.c \
				object-block.c
SRC_FILE_PLUGIN = mlx-plugin.c \
				mlx-plugin-keyboard.c \
				mlx-plugin-mouse.c \
				mlx-plugin-image.c \
				mlx-plugin-draw.c \
				mlx-putchar.c \
				mlx-plugin-destroy.c
SRC_FILE_MANDATORY = map-count-char_mandatory.c \
					 user-object-image-create.c \
					 user-object-create.c \
					 user-init.c user-update.c user-pop.c \
					cub3D.c
SRC = 	$(SRC_FILE_COMMON) \
		$(SRC_FILE_PLUGIN) \
		$(SRC_FILE_MANDATORY) \
		main.c
INCLUDE = -I./include/bonus \
		  -I./include/common \
		  -I./include/mandatory \
		  -I./include/plugin \
		  -I./mlx-linux
OBJ = obj
SRCOBJ = $(SRC:%.c=${OBJ}/%.o)
LIB = -L./mlx-linux
ENGINE = -lmlx -lX11 -lXext -lm
ifeq ($(OS),Windows_NT)
else
	CREATE = mkdir -p $(1)
	REMOVE = rm -rf $(1)
endif

all: $(NAME)
$(NAME): $(SRCOBJ)
	$(CC) $^ $(INCLUDE) $(LIB) $(ENGINE) -o $(NAME)
${OBJ}/%.o : %.c
	$(call CREATE,$(OBJ))
	$(CC) -c $< -o $@ $(INCLUDE)
clean:
	$(call REMOVE,${OBJ}/*.o)
fclean: clean
	$(call REMOVE,${NAME})
re: fclean all