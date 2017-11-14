
NAME = libft

all:
	gcc -Wall -Wextra -Werror -c ft_*.c
	ar rc libft.a *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf libft.a

re: fclean all
