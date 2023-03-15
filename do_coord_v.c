/*
** EPITECH PROJECT, 2023
** vvvvvvvv
** File description:
** ccccccc
*/

#include "my.h"

int *do_coord_v(char *x, char *y, char *z)
{
    int *vector = malloc(sizeof(int) * 3);
    vector[0] = atoi(x);
    vector[1] = atoi(y);
    vector[2] = atoi(z);
    return vector;
}
