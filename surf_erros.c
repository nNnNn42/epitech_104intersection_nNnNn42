/*
** EPITECH PROJECT, 2023
** jjjjjjjj
** File description:
** ffffff
*/

#include "my.h"

int surf_erros(char *isou)
{
    if (strlen(isou) == 1) {
        if (isou[0] < '1' || isou[0] > '3') {
            return 84;
        }
    } else {
        return 84;
    }
    return 0;
}
