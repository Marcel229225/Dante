/*
** EPITECH PROJECT, 2021
** Dante star
** File description:
** Generator for the perfect map
*/

#include "../../include/my.h"

char **perfect_map(int i, int j)
{
    int a, b;
    char **str = malloc(sizeof(char *) * i);
    for (a = 0; a < i; a++) {
        str[a] = malloc(sizeof(char) * j);
        srand(time(NULL));
        int r = rand() % j - 1;

        for (b = 0; b < j; b++)
        {
            if ((a % 2 == 0) || (a != i -1 && b == r) ||
                ( a == i - 1 && b == j - 1)) str[a][b] = '*';
            else if ((a % 2 != 0))
                str[a][b] = 'X';
        }
        str[a][b] = '\0';
    }
    str[a] = NULL;
    return (str);
}

char **imperfect_map(int i, int j)
{
    int a, b;
    char **str = malloc(sizeof(char *) * i);

    for (a = 0; a < i; a++) {
        str[a] = malloc(sizeof(char) * j);

        srand(time(NULL));
        int r1 = rand() % j;
        int r2 = rand() % j - 2;

        for (b = 0; b < j; b++) {
            if ((a % 2 == 0) || (a != i -1 && b == r1)
                || (a != i -1 && b == r2)
                || ( a == i - 1 && b == j - 1)) str[a][b] = '*';
            else if ((a % 2 != 0))
                str[a][b] = 'X';
        }
        str[a][b] = '\0';
    }
    str[a] = NULL;
    return (str);
}

void free_all(char **map, int x)
{
    int i;

    for (i = 0; i < x; i++)
        free(map[i]);
    free(map);
}

int check_option(int ac, char **av)
{
    if ((ac == 4) && (strcmp(av[3], "perfect") == 0))
        return (2);
    else if ((ac == 3))
        return (1);
    else if (ac < 3 || ac == 2 || ac == 1)
        return (84);
}

int main(int ac, char **av)
{
    int a;
    char **str;
    int check = check_option(ac, av);

    if (check == 2)
        str = perfect_map(atoi(av[2]), atoi(av[1]));
    else if
        (check == 1)
        str = imperfect_map(atoi(av[2]), atoi(av[1]));
    else if (check == 84)
        return (84);

    for (a = 0; str[a] != NULL; a++) {
        printf("%s", str[a]);
        if (a != atoi(av[2]) - 1)
            printf("\n");
    }
    return (0);
}
