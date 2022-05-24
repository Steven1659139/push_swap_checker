NAME = checker

MAIN = checker.c

SRC =  lstnew_int.c lstlast.c  parsing.c rotate.c lst_addback.c ft_lstadd.c ft_lstlen.c push.c swap.c reverse_rotate.c update.c init.c filter.c convert.c \
		./get_next_line/get_next_line.c ./get_next_line/get_next_line_utils.c

CC = gcc
CFLAGS = -Werror -Wall -Wextra -g

OBJS = $(SRC:.c=.o)
MAIN_OBJS = $(MAIN:.c=.o)


all: $(NAME)

$(NAME): $(OBJS) $(MAIN_OBJS)
	@$(MAKE) -rmC ./Libft
	@$(CC) $(CFLAGS) $(MAIN) $(OBJS) ./Libft/libft.a -o $(NAME)

clean:
	@$(MAKE) -C ./Libft fclean
	@rm -rf $(OBJS)
	@rm -rf $(MAIN_OBJS)


fclean: clean
	@rm -rf $(NAME)

add:
	@git add *.c
	@git add *.h
	@git add Makefile
	@git add Libft
	@git add get_next_line
	@git status

push:
	@git push origin master

re: fclean all

.PHONY: all clean fclean re
