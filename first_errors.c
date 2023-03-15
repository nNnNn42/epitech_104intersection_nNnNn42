/*
** EPITECH PROJECT, 2023
** tttttttt
** File description:
** ttttttttt
*/

#include "my.h"

int first_errors(int argc, char **argv)
{
    if (argc != 9) {
        return 84;
    }
    if (surf_erros(argv[1]) == 84)
        return 84;
    if (coords_errors(argc, argv) == 84)
        return 84;
    if (verif_arg(argv[1], argv[8]) == 84)
        return 84;
    return 0;
}
