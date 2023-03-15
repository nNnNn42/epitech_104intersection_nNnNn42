/*
** EPITECH PROJECT, 2023
** eeeeeee
** File description:
** rrrrrrrr
*/

#include "my.h"

void do_intersection_coord(int *vector, float sol, int *point)
{
    float inter_p[3];
    for (int i = 0; i != 3; i++)
        inter_p[i] = point[i] + sol * vector[i];
    printf("(%.3f, %.3f, %.3f)\n", inter_p[0], inter_p[1], inter_p[2]);
}
