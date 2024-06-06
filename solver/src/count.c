/*
** EPITECH PROJECT, 2021
** count
** File description:
** count the nuber of line
*/

#include "../../include/my.h"

int count(char *map, char a)
{
    int p = 0;
    for (int i = 0;map[i] != '\0'; i++) {
        if (map[i] == a)
            p++;
    }
    return (p+1);
}
