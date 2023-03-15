/*
** EPITECH PROJECT, 2023
** eeeeeeee
** File description:
** rrrrrrrr
*/

#include "my.h"

int co_plus_int(int *vector, int *point, int p)
{
    float *eq = make_coeq(vector, point, p);
    float *sol2;
    float rac = do_racist(eq);
    if (rac == -1 || eq[0] == 0) {
        free(eq);
        return 0;
    }else if (rac != 0) {
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
