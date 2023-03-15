/*
** EPITECH PROJECT, 2022
** myh
** File description:
** ooo
*/

#pragma once

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#ifndef myh
    #define myh
void do_intersection_coord(int *vector, float sol, int *point);
float *do_sols(int rac, float *eq);
float *do_simple(float *eq);
int *make_coord_p(char *x, char *y, char *z);
int *do_coord_v(char *x, char *y, char *z);
void do_intersection_coord(int *vector, float sol, int *point);
float *make_coeq(int *vector, int *point, int p);
float *make_cyeq(int *vector, int *point, int p);
float *make_seq(int *vector, int *point, int p);
float do_racist(float *eq);
void show_vector_point(int *vector, int *point);
int verif_arg(char *xoxo, char *last_arg);
int coords_errors(int argc, char **argv);
int surf_erros(char *isou);
int first_errors(int argc, char **argv);
void description(void);
int sphere_maker(int *vector, int *point, int p);
int cy_plus_inter(int *vector, int *point, int p);
int co_plus_int(int *vector, int *point, int p);
void verif_surface(char **argv);
int main(int argc, char **argv);
void my_putchar(char c);
void my_putstr(char const *str);
#endif
