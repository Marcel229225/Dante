/*
** EPITECH PROJECT, 2021
** find_path
** File description:
** find the small path
*/

#include "../../include/my.h"

int line(char **str)
{
    int n = 0;

    for (n = 0; str[n] != NULL; n++);
    return (n);
}

int col(char **str)
{
    int m = 0, n = 0;
    for (m = 0; str[n][m] != '\0'; m++);
    return (m);
}

int inside_and_outside(char **map)
{
    int m = line(map);
    int n = col(map);
    if (map[0][0] == '*' && map[m - 1][n - 1] == '*')
        return (1);
    return (0);
}

int solver(char **map, int i, int j)
{
    int m = line(map), n = col(map);
    map[i][j] = 'R';
    if (i == (m - 1) && j == (n - 1)) {
        map[i][j] = 'o';
        return (1); }
    if (map[i + 1] != NULL && map[i + 1][j] == '*')
        if (solver(map, (i + 1), j) == 1) {
            map[i][j] = 'o';
            return (1); }
    if (j + 1 < strlen(map[i]) && map[i][j + 1] == '*')
        if (solver(map, i, (j + 1)) == 1) {
            map[i][j] = 'o';
            return (1); }
    if ((i - 1) >= 0 && map[i - 1][j] == '*')
        if (solver(map, (i - 1), j) == 1) {
            map[i][j] = 'o';
            return (1); }
    if ((j - 1) >= 0 && map[i][j - 1] == '*')
        if (solver(map, i, (j - 1)) == 1) {
            map[i][j] = 'o';
            return (1); }
    return (0);
}
