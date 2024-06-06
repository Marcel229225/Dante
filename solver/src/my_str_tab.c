/*
** EPITECH PROJECT, 2021
** my_str_tab
** File description:
** create a separator
*/

#include "../../include/my.h"

char **my_str_tab(char *src, char a)
{
    int nb = count(src, a);
    char **str = malloc(sizeof(char *) * nb);
    int i = 0;
    int k = 0;
    int j;

    for (j = 0; src[i] != '\0'; i++) {
        if (src[i] == a)
            j++;
        str[j] = malloc(sizeof(char) * (i + 1)); }
    i = 0;
    for (j = 0; src[i] != '\0'; i++, k++) {
        if (src[i] == a) {
            str[j][i] = '\0';
            j++;
            i++;
            k = 0;
        }
        str[j][k] = src[i];}
    return (str);
}
