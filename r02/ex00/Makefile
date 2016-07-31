NAME = rush-2

SRC = main.c linked_list.c ft_putstr.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) 
	gcc -o $(NAME) main.o linked_list.o ft_putstr.o

clean:
	/bin/rm -f main.o linked_list.o ft_putstr.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all