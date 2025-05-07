NAME = libft.a
SRC = $(wildcard srcs/*.c)
OBJ = $(patsubst srcs/%.c, %.o, $(SRC))
HDIR = includes
AR = ar
ARFLAGS = rcs
CC = cc
CFLAGS = -Wall -Werror -Wextra -I$(HDIR)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
