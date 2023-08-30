SERVER = server
CLIENT = client
SERVER_BONUS = server_bonus
CLIENT_BONUS = client_bonus
INCLUDE = -I./include
VPATH = src: ./src/mandatory src: ./src/bonus
SERVER_SRC = utils.c server.c
CLIENT_SRC = utils.c ft_atoi_base.c client.c
SERVER_SRC_BONUS = signal_io.c ft_atoi_base.c utils.c server_bonus.c
CLIENT_SRC_BONUS = signal_io.c ft_atoi_base.c utils.c client_bonus.c
OBJ = obj
SERVER_SRCOBJ = $(SERVER_SRC:%.c=${OBJ}/%.o)
CLIENT_SRCOBJ = $(CLIENT_SRC:%.c=${OBJ}/%.o)
CLIENT_BONUS_SRCOBJ = $(CLIENT_SRC_BONUS:%.c=${OBJ}/%.o)
SERVER_BONUS_SRCOBJ = $(SERVER_SRC_BONUS:%.c=${OBJ}/%.o)
CFLAG = -Wall -Wextra -Werror
CC = cc
ifneq ($(OS),Windows_NT)
	CREATE_DIR = mkdir -p $(1)
	REMOVE_DIR = rm -rf $(1)
endif

all: $(SERVER) $(CLIENT)
$(SERVER): $(SERVER_SRCOBJ)
	$(CC) $^ -o $(SERVER) $(CFLAG)
$(CLIENT): $(CLIENT_SRCOBJ)
	$(CC) $^ -o $(CLIENT) $(CFLAG)
bonus: $(SERVER_BONUS) $(CLIENT_BONUS)
$(SERVER_BONUS): $(SERVER_BONUS_SRCOBJ)
	$(CC) $^ -o $(SERVER_BONUS) $(CFLAG)
$(CLIENT_BONUS): $(CLIENT_BONUS_SRCOBJ)
	$(CC) $^ -o $(CLIENT_BONUS) $(CFLAG)
${OBJ}/%.o : %.c
	$(call CREATE_DIR, ${OBJ})
	$(CC) -c $< -o $@ $(INCLUDE) $(CFLAG)
clean:
	$(call REMOVE_DIR, ${OBJ}/*.o)
fclean: clean
	$(call REMOVE_DIR, ${SERVER})
	$(call REMOVE_DIR, ${CLIENT})
fclean_bonus: clean
	$(call REMOVE_DIR, ${SERVER_BONUS})
	$(call REMOVE_DIR, ${CLIENT_BONUS})
re: fclean all
re_bonus: fclean_bonus bonus

.PHONY: all clean fclean re bonus