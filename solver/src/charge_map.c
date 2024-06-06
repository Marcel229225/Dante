/*
** EPITECH PROJECT, 2021
** charge_map
** File description:
** charge the map
*/

#include "../../include/my.h"

char **for_map(char const *filepath)
{
    struct stat bul;
    stat(filepath, &bul);
    int op = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * (bul.st_size + 1));
    int re = read(op, buffer, bul.st_size);
    close(op);
    char **load = my_str_tab(buffer, '\n');
    return (load);
}
