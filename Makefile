##
## EPITECH PROJECT, 2021
## Dante star
## File description:
## Makefile of the project
##

all:
	make -C solver/
	make -C generator/

clean:
	make clean -C solver/
	make clean -C generator/

fclean:
	make fclean -C solver/
	make fclean -C generator/

re:
	make fclean all