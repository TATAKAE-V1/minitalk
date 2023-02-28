NAME = minitalk.a

BONUS = minitalk_bonus.a

CFLAGS = -Wall -Wextra -Werror

SRC =		server.c \
			client.c \
			minitalk_utils.c \

SRC2 =		server_bonus.c \
			client_bonus.c \
			minitalk_utils.c \

TARGET = server client

TARGET_BONUS = server_bonus client_bonus

OBJ = $(SRC:%.c=%.o)

OBJ2 = $(SRC2:%.c=%.o)

all: $(TARGET)

bonus: $(TARGET_BONUS)
	
$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

$(BONUS): $(OBJ2)
	ar -rc $(BONUS) $(OBJ2)

server: $(NAME)
	gcc server.c $(NAME) -o server

server_bonus: $(BONUS)
	gcc server_bonus.c $(BONUS) -o server_bonus

client: $(NAME)
	gcc client.c $(NAME) -o client

client_bonus: $(BONUS)
	gcc client_bonus.c $(BONUS) -o client_bonus

clean:
		rm -f $(OBJ)
		rm -f $(OBJ2)

fclean: clean
		rm -f $(NAME) $(TARGET)
		rm -f $(BONUS) $(TARGET_BONUS)

re: fclean all
