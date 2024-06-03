CC		= cc
CFLAGS	= -Wall -Werror -Wextra -I./includes
TARGET	= fractol
SRCDIR	= src
INCDIR	= includes
FTPRINTF_DIR = ft_printf
SOURCES = src/main.c src/check_errors.c


all : $(TARGET)

$(TARGET) : 