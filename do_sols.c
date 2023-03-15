/*
** EPITECH PROJECT, 2023
** rrrrrr
** File description:
** eeeeaa
*/

#include "my.h"

float *do_sols(int rac, float *eq)
{
    float *sol2 = malloc(sizeof(float) * 2);
    float down = 2 * eq[0];
    sol2[0] = (-eq[1] + sqrt(rac)) / down;
    sol2[1] = (-eq[1] - sqrt(rac)) / down;
    return sol2;
}
