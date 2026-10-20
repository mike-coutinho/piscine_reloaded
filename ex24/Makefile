NAME = libft.a
SRCS = srcs/ft_putchar.c
HEADERS = includes
OBJS = $(SRCS:.c=.o)

%.o: %.c
	cc -I $(HEADERS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)