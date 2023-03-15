/*
** EPITECH PROJECT, 2023
** gggggg
** File description:
** fffffff
*/

#include "my.h"

int *make_coord_p(char *x, char *y, char *z)
{
    int *point = malloc(sizeof(int) * 3);
    point[0] = atoi(x);
    point[1] = atoi(y);
    point[2] = atoi(z);
    return point;
}
