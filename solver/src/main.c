/*
** EPITECH PROJECT, 2021
** main
** File description:
** the principal function of the programme
*/

#include "../../include/my.h"

int main(int ac, char **av)
{
    if ( ac == 1)
        return (84);
    int n = 0;
    char **save = for_map(av[1]);
    if (inside_and_outside(save) == 1) {
        int print = solver(save, 0, 0);
        for (int i = 0; save[i] != NULL; i++)
            for (int j = 0; save[i][j] != '\0'; j++)
                if (save[i][j] == 'R')
                    save[i][j] = '*';
        for (; save[n] != NULL; n++)
            printf(save[n + 1] != NULL ? "%s\n" : "%s", save[n]);
    }
    else
        return (84);
    if (ac > 2)
        return (84);
    return (0);
}
