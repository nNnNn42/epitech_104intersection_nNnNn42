##
## EPITECH PROJECT, 2022
## aaaaa
## File description:
## ccccccc
##

NAME = 104intersection

SRC	= coords_erros.c\
	cy_plus_inter.c\
	do_coord_v.c\
	do_racist.c\
	do_sols.c\
	main.c\
	make_coord_p.c\
	make_seq.c\
	my_putstr.c\
	sphere_maker.c\
	verif_arg.c\
	co_plus_int.c\
	description.c\
	do_intersection_coord.c\
	do_simple.c\
	first_errors.c\
	make_coeq.c\
	make_cyeq.c\
	my_putchar.c\
	show_vector_point.c\
	surf_erros.c\
	verif_surface.c\

OBJ	= $(SRC:.c=.o)

BRAIN = -lm

all	:	$(OBJ)
		gcc -o $(NAME) $(SRC) $(BRAIN)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
