TARGET	= fractol
CC		= cc
CFLAGS	= -g -Wall -Werror -Wextra

OBJ_DIR	= ./bin/
INC_DIR	= ./includes/
SRC_DIR	= ./src/

MLXDIR	= ./minilibx/
LIBFT	= ./libft/

IFLAGS	= -I$(INC_DIR) -I$(MLXDIR) -I$(LIBFT)Includes
LFLAGS	= -L$(LIBFT) -lft -L$(MLXDIR) -lmlx_Linux -lm -lmlx -lXext -lX11

INCS	= fractol.h m_basic.h
SRCS	= check_errors.c main.c startmlx.c mlx_utils.c complex_utils.c mandelbrot.c init.c
SRC		= $(addprefix $(SRC_DIR), $(SRCS))
INC		= $(addprefix $(INC_DIR), $(INCS))
OBJ		= $(SRCS:%.c=$(OBJ_DIR)%.o)

all : $(TARGET)

$(TARGET) :  $(OBJ_DIR) $(OBJ)
	@echo "\033[1;32mBuilding $@\033[0m\n"
	@$(MAKE) -C $(LIBFT) --no-print-directory
	@$(MAKE) -C $(MLXDIR) --no-print-directory
	@$(CC) -o $@ $(OBJ) $(LFLAGS) $(CFLAGS)
	@echo "\033[1;32mDone ✅\033[0m\n"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c $(INC)
	@echo "\033[1;33mCompiling $<\033[0m\n"
	@$(CC) -c -g $(IFLAGS) -o $@ $<
	@echo "\033[1;33mDone ✅\033[0m\n"

$(OBJ_DIR) :
	@echo "\033[1;34mCreating $(OBJ_DIR)\033[0m\n"
	@mkdir -p $(OBJ_DIR)
	@echo "\033[1;34mDone ✅\033[0m\n"

clean :
	@echo "\033[1;31mCleaning\033[0m"
	@$(MAKE) -C $(LIBFT) --no-print-directory clean
	@rm -rf $(OBJ_DIR)
	@echo "\033[1;31mDone ✅\033[0m\n"

fclean : clean
	@$(MAKE) -C $(LIBFT) --no-print-directory fclean
	@$(MAKE) -C $(MLXDIR) --no-print-directory clean
	@rm -f $(TARGET)
	@echo "\033[1;31mDone ✅\033[0m\n"

re : fclean all

.PHONY : re all fclean clean $(OBJ_DIR)
