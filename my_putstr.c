/*
** EPITECH PROJECT, 2023
** yyyyyyy
** File description:
** ttttttttttt
*/

#include "my.h"

void my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
