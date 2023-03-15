/*
** EPITECH PROJECT, 2023
** aaaaaaa
** File description:
** xxxxxxx
*/

#include "my.h"

float *do_simple(float *eq)
{
    float *sol2 = malloc(sizeof(float) * 2);
    float up = eq[1] * -1;
    float down = 2 * eq[0];
    sol2[0] = up / down;
    sol2[1] = 0;
    return sol2;
}
