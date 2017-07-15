##
## Makefile for  in /home/Wasx/CPool_Day12
## 
## Made by Wassim ALKAYAR
## Login   <Wasx@epitech.net>
## 
## Started on  Wed Mar 15 10:16:14 2017 Wassim ALKAYAR
## Last update Sun May 14 12:52:29 2017 Wassim Alkayar
##

NAME	=	my_sokoban

SRC	=	main.c				\
		src/basics.c			\
		src/error.c			\
		src/get_map_size.c		\
		src/man.c			\
		src/malloc_and_verifie.c	\
		src/utils1.c			\
		src/utils2.c			\
		src/utilsplayer.c		\
		src/player_mouv.c		\
		src/check_loose.c

CFLAGS	+=	-lncurses -Wall -Wextra -I./include

OBJ	=	$(SRC:.c=.o)

GCC	=	gcc -o

RM	=	rm -f

ASUPR2	=	my_sokoban

all: $(NAME)

$(NAME): $(OBJ)
	$(GCC) $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(ASUPR2)

re:	fclean all

.PHONY: all clean fclean re
