/*
** EPITECH PROJECT, 2023
** dddddd
** File description:
** qqqqqq
*/

#include "my.h"

float *make_coeq(int *vector, int *point, int p)
{
    float *eq = malloc(sizeof(int) * 3);
    float angle = (p * M_PI) / 180;
    float r = pow(tan(angle), 2);
    eq[0] = pow(vector[0], 2) + pow(vector[1], 2);
    eq[0] = eq[0] - (pow(vector[2], 2) * r);
    eq[1] = (2 * vector[0] * point[0]) + (2 * vector[1] * point[1]);
    eq[1] = eq[1] - ((2 * vector[2] * point[2]) * r);
    eq[2] = pow(point[0], 2) + pow(point[1], 2);
    eq[2] = eq[2] - (pow(point[2], 2) * r);
    return eq;
}
