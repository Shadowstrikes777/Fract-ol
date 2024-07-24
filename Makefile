TARGET	= fractol
CC		= cc
CFLAGS	= -Wall -Werror -Wextra -g

OBJ_DIR	= ./bin/
INC_DIR	= ./includes/
SRC_DIR	= ./src/

MLXDIR	= ./minilibx/
LIBFT	= ./libft/

IFLAGS	= -I$(INC_DIR) -I$(MLXDIR) -I$(LIBFT)Includes
LFLAGS	= -L$(LIBFT) -lft -L$(MLXDIR) -lmlx_Linux -lm -lmlx -lXext -lX11

INCS	= fractol.h m_basic.h utils.h

SRCS	= check_errors.c main.c \
				startmlx.c mlx_utils.c complex_utils.c mandelbrot.c

SRC		= $(addprefix $(SRC_DIR), $(SRCS))
INC		= $(addprefix $(INC_DIR), $(INCS))
OBJ		= $(SRCS:%.c=$(OBJ_DIR)%.o)

all : $(TARGET)

$(TARGET) :  $(OBJ_DIR) $(OBJ)
			@$(MAKE) -C $(LIBFT)
			@$(MAKE) -C $(MLXDIR)
			$(CC) -o $@ $(OBJ) $(LFLAGS) $(CFLAGS)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c $(INC)
			$(CC) -c $(IFLAGS) -o $@ $<

$(OBJ_DIR) :
		mkdir -p $(OBJ_DIR)

clean :
		@echo "cleaning"
		@$(MAKE) -C $(LIBFT) clean
		@rm -rf $(OBJ_DIR)

fclean : clean
		@$(MAKE) -C $(LIBFT) fclean
		@$(MAKE) -C $(MLXDIR) clean
		@rm -f $(TARGET)

re : fclean all

.PHONY : re all fclean clean $(OBJ_DIR)