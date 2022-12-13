NAME = printf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_putchat.c ft_putnbr.c ft_putstr.c ft_hexa.c 
	
OBJS = $(SRCS:.c=.o)

all : $(NAME)
	
$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
$(OBJS):
	$(CC) $(FLAGS) $(SRC) $(ARG) 

clean : 
	rm -f $(OBJS)

fclean : cleanls

	rm -f $(NAME)

re: fclean all