NAME = printf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_putchat.c ft_putnbr.c ft_putstr.c ft_hexa.c 
	

all : $(NAME)
	
$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean : 
	rm -f $(NAME)

fclean : clean

re: fclean all