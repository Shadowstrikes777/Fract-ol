NAME = libftprintf.a
LIBFT = ./libft/libft.a
LIBFTDIR = ./libft
SOURCES = ft_printf.c ft_ptr.c ft_putnbrbase.c ft_putstr.c
OBJECTS = $(SOURCES:.c=.o)
CFLAGS = -Wall -Werror -Wextra
CC = cc

all : $(NAME)

$(NAME): $(OBJECTS) $(LIBFT)
	@ar rcs $@ $(OBJECTS) $(LIBFTDIR)/*.o

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT) :
	@$(MAKE) -C $(LIBFTDIR)

clean :
	@$(MAKE) -C $(LIBFTDIR) clean
	@rm -f $(OBJECTS)

fclean: clean
	@$(MAKE) -C $(LIBFTDIR) fclean
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
