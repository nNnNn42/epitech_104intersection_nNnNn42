/*
** EPITECH PROJECT, 2023
** yyyyyyy
** File description:
** tttttttt
*/

#include "my.h"

int main(int argc, char **argv)
{
    if (argc == 2 && strlen(argv[1]) == 2)
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            description();
            return 0;
        }
    if (first_errors(argc, argv) == 84)
        return 84;
    verif_surface(argv);
    return 0;
}
