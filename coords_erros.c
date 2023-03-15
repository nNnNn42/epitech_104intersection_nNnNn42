/*
** EPITECH PROJECT, 2023
** uuuuuuu
** File description:
** yyyyyyy
*/

#include "my.h"

int coords_errors(int argc, char **argv)
{
    int j = 0;
    for (int i = 2; i != argc - 1; i++) {
        j = 0;
        while (argv[i][j] != '\0') {
            if ((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-')
                j++;
            else {
                return 84;
            }
        }
    }
    if (atoi(argv[5]) == 0 && atoi(argv[6]) == 0 && atoi(argv[7]) == 0) {
        return 84;
    }
    return 0;
}
