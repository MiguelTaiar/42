#incluir o header 42

NAME = libft.a

SRC = $(wildcard *.c)

OBJS = $(SRC:%.c=%.o)

FLAGS = -Wall -Wextra -Werror -I. -c

SOFLAGS = -c -Wall -Wextra -Werror -fpic

GREEN = '\033[0;32m'
RED = '\033[0;31m'
RESET = '\033[0m'

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $@

so: $(SRC)
	gcc $(SOFLAGS) $(SRC)
	gcc -shared -o libft.so $(wildcard *.o)

clean:
	@echo $(RED)Removendo $(OBJS)$(RESET) # @ remove a ação do prompt
	rm -f $(OBJS)

fclean:
	@echo $(RED)Removendo $(NAME)$(RESET) #necessário add '#' ao final
	rm -f $(NAME)

re:	fclean all

.PHONY:	clean fclean all re
