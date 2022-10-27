CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_atoi.c
OBJS = $(SRCS: .c=.o)

all: $(NAME)

$(NAME): $(OBJS) libft.h

%.o: %.c
       $(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o $(NAME)
