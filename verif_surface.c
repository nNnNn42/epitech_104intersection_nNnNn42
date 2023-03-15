/*
** EPITECH PROJECT, 2023
** ggggggg
** File description:
** hhhhhhhhh
*/

#include "my.h"

void verif_surface(char **argv)
{
    int p = atoi(argv[8]);
    int *vector = do_coord_v(argv[5], argv[6], argv[7]);
    int *point = make_coord_p(argv[2], argv[3], argv[4]);
    int xoxo = atoi(argv[1]);
    if (xoxo == 1) {
        printf("Sphere of radius %d\n", p);
        show_vector_point(vector, point);
        sphere_maker(vector, point, p);
    }
    if (xoxo == 2) {
        printf("Cylinder of radius %d\n", p);
        show_vector_point(vector, point);
        cy_plus_inter(vector, point, p);
    }
    if (xoxo == 3) {
        printf("Cone with a %d degree angle\n", p);
        show_vector_point(vector, point);
        co_plus_int(vector, point, p);
    }
    free(point);free(vector);
}
