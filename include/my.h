/*
** EPITECH PROJECT, 2021
** Dante star
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>

char *reader(char const *filepath);
int nb_line(char *s);
char **load_2dmap(char *n);
void display_window(char **av);
void free_all(char **map, int x);
char **perfect_map(int i, int j);
char **imperfect_map(int i, int j);
int check_option(int ac, char **av);
char **for_map(char const *filepath);
char **find_path(char **map);
char **my_str_tab(char *src, char a);
int count(char *map, char a);
int *read_map(char **load);
int moov(char **map, int i, int j);
int solver(char **map, int i, int j);
int inside_and_outside(char **map);

#endif
