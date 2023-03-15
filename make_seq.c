/*
** EPITECH PROJECT, 2023
** bbbbbbb
** File description:
** nnnnnnn
*/

#include "my.h"

float *make_seq(int *vector, int *point, int p)
{
    float *eq = malloc(sizeof(float) * 3);
    for (int i = 0; i != 3; i++) {
        eq[0] += (pow(vector[i], 2));
        eq[1] += (point[i] * vector[i]);
        eq[2] += (pow(point[i], 2));
    }
    eq[1] = eq[1] * 2;
    eq[2] = eq[2] - pow(p, 2);
    return eq;
}
