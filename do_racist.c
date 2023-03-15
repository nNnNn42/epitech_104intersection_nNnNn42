/*
** EPITECH PROJECT, 2023
** bbbbbb
** File description:
** mmmmm
*/

#include "my.h"

float do_racist(float *eq)
{
    float rac = pow(eq[1], 2) - (4 * (eq[0] * eq[2]));
    if (rac > 0)
        printf("2 intersection points:\n");
    if (rac == 0) {
        if (eq[0] == 0)
            printf("There is an infinite number of intersection points.\n");
        else
            printf("1 intersection point:\n");
    }
    if (rac < 0) {
        printf("No intersection point.\n");
        return (-1);
    }
    return rac;
}
