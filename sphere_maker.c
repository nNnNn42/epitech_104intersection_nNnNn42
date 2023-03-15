/*
** EPITECH PROJECT, 2023
** jjjjjjjjj
** File description:
** jjjjjjjjjjj
*/

#include "my.h"

int sphere_maker(int *vector, int *point, int p)
{
    float *sol2;
    float *eq = make_seq(vector, point, p);
    float rac = do_racist(eq);
    if (rac == -1) {
        free(eq);
        return 0;
    } else if (rac != 0) {
        sol2 = do_sols(rac, eq);
        do_intersection_coord(vector, sol2[0], point);
        do_intersection_coord(vector, sol2[1], point);
    } else {
        sol2 = do_simple(eq);
        do_intersection_coord(vector, sol2[0], point);
    }
    free(eq);
    free(sol2);
    return 0;
}
