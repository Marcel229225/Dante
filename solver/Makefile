##
## EPITECH PROJECT, 2021
## Dante star
## File description:
## Makefile of the solver 
##

SRC	=	$(shell echo src/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

all : $(NAME)

$(NAME):	$(OBJ)
	 gcc -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
