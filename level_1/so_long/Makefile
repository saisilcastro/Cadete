NAME = so_long
INCLUDE = -I./include/plugin \
		  -I./include/common \
		  -I./include/mandatory \
		  -I./include/bonus \
		  -I./mlx-linux
LIB = ./mlx-linux
VPATH = src: ./ src: ./src/common src: ./src/plugin src: ./src/mandatory src: ./src/bonus
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
					so_long.c
SRC_FILE_BONUS = map-count-char_bonus.c \
				 user-image-animation_bonus.c \
				 user-object-image-create_bonus.c \
				 user-object-create_bonus.c \
				 user-init_bonus.c user-update_bonus.c user-pop_bonus.c \
				 place-print_bonus.c \
				 itoa-base.c \
				 so_long_bonus.c
SRC = ${SRC_FILE_COMMON} \
	  ${SRC_FILE_PLUGIN} \
	  ${SRC_FILE_MANDATORY} \
	  main.c
SRC_BONUS = ${SRC_FILE_COMMON} \
			${SRC_FILE_PLUGIN} \
			${SRC_FILE_BONUS} \
	  		main.c
OBJ = ./obj/
SRCOBJ = $(SRC:%.c=${OBJ}%.o)
SRCOBJ_BONUS = $(SRC_BONUS:%.c=${OBJ}%.o)
CFLAG = -Wall -Wextra -Werror
ENGINE = -lmlx -lX11 -lXext -lm

CHECK_MANDATORY = $(shell ls obj/map-count-char_mandatory.o 2>&1)
CHECK_BONUS	= $(shell ls obj/map-count-char_bonus.o 2>&1)

ifeq (${CHECK_BONUS}, obj/map-count-char_bonus.o)
all: fclean $(NAME)
else
all: $(NAME)
endif
$(NAME): $(SRCOBJ)
	$(CC) $^ $(INCLUDE) -L$(LIB) $(ENGINE) -o $(NAME) $(CFLAG)
${OBJ}%.o: %.c
	@mkdir -p "./obj"
	$(CC) -c $< -o $@ $(INCLUDE) $(CFLAG)

ifeq (${CHECK_MANDATORY}, obj/map-count-char_mandatory.o)
bonus: fclean
	@make SRC="$(SRC_BONUS)"
else
bonus:
	@make SRC="$(SRC_BONUS)" $(NAME)
endif
${OBJ}%.o : %.c
	@mkdir -p "./obj"
	@$(CC) -c $< -o $@ $(INCLUDE) $(CFLAG)
clean:
	@rm -rf ./obj/*.o
fclean: clean
	@rm -rf $(NAME)
re: fclean all
#	make
.PHONY: bonus all clean fclean re