/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** check_map
*/

#include "../include/my.h"
#include <stdlib.h>

void    check_oandx(char *map)
{
    int o = 0;
    int x = 0;

    for (int i = 0; map[i] ; i += 1) {
        if (map[i] == 'O')
            o += 1;
        if (map[i] == 'X')
            x += 1;
    }
    if (o != x)
        exit (84);
}

void    check_char(char *map)
{
    int a = 0;
    int p = 0;
    check_oandx(map);
    for (int i = 0; map[i]; i += 1) {
        if (map[i] == 'P')
            p += 1;
        if (map[i] == '\n' && map[i-1] != '#') {
            exit (84);
        }
    }
    if (p != 1)
        exit (84);
}
int     check_map(char *map)
{
    char available[7] = "\n #XOP";
    int count = 0;

    check_char(map);
    for (int i = 0; map[i] != '\0'; i += 1) {
        count = 0;
        for (int a = 0; available[a] != '\0'; a += 1) {
            if (map[i] == available[a])
                count += 1;
        }
        if (count == 0)
            exit (84);
    }
    return (0);
}
