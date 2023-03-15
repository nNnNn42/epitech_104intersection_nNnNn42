/*
** EPITECH PROJECT, 2023
** ttttttt
** File description:
** rrrrrrrrr
*/

#include "my.h"

int verif_arg(char *xoxo, char *last_arg)
{
    int i = 0;

    while (last_arg[i] != '\0') {
        if (last_arg[i] >= '0' && last_arg[i] <= '9')
            i++;
        else {
            return 84;
        }
    }
    if (atoi(xoxo) == 3 && atoi(last_arg) > 90) {
        return 84;
    }
    return 0;
}
