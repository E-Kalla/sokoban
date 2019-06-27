##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Make sokoban
##

SRC		=	./src/deplacement.c \
			./src/find_player.c \
			./src/my_strlen.c   \
			./src/movement.c    \
			./src/push.c    \
			./src/sokoban.c \
			./src/displaymap.c  \
			./src/getmap.c  \
			./src/my_strcpy.c   \
			./src/check_arg.c   \
			./src/display_desc.c    \
			./src/my_putstr.c   \
			./src/my_putchar.c  \
			./src/compare.c \
			./src/check_map.c   \
            ./src/my_strncpy.c  \
            ./src/my_str_to_wordtab.c   \

OBJ 	= 	$(SRC:.c=.o)

NAME	=	my_sokoban

$(NAME) : $(OBJ)
		gcc -o $(NAME) $(OBJ) -lncurses
all:	$(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:     fclean all
