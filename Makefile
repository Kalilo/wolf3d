NAME = wolf3d

CC = gcc

C_FLAGS = -Wall -Wextra -Werror

MLX_FLAGS = -lmlx -framework OpenGL -framework AppKit

SRC_PATH = ./src/

INCL = /includes/wolf3d.h

SRC = $(SRC_PATH)main.c $(SRC_PATH)ray_casting.c

OBJ = $(SRC_PATH)main.o $(SRC_PATH)ray_casting.o

all: $(NAME)

$(NAME): qme
	@echo "\nCrystal is preparing to compile Wolf3D..."
	@$(CC) $(C_FLAGS) -c $(SRC) -I $(INCL)
	@echo "Crystal has successfully created all your object files..."
	@mv *.o src/
	@echo "Crystal has successfully moved all the object files to src/"
	@$(CC) -o $(NAME) $(C_FLAGS) $(OBJ) $(MLX_FLAGS)
	@echo "Crystal has successfully compiled your Wolf3D.\n"

clean:
	@rm -f $(OBJ)
	@echo "Crystal has removed your object files."

fclean: clean
	@rm -f $(NAME)
	@echo "Crystal has successfully removed the executable."

re: fclean all
	@echo "Crystal has successfully recompiled."

norme: 
	@norminette $(SRC)

me: qme
	cat -e author

qme:
	@rm -Rf author
	@whoami > author
