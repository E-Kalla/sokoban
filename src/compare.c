/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** compare
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"
#include <ncurses.h>

int compare(char *str, char *dest)
{
    int i = 0;

    while (str[i] || dest[i]) {
        if (str[i] != dest[i])
            return (0);
        i += 1;
    }
    return (1);
}

void    short_up(map_t *sokoban)
{
    if (sokoban->mapi[sokoban->yp-1][sokoban->xp] == '#')
        displaymap(sokoban); 
    else if (sokoban->mapi[sokoban->yp-1][sokoban->xp] == 'O') {
        sokoban->mapi[sokoban->yp][sokoban->xp] = ' ';
        if (is_on_o(sokoban) == 1) {
            sokoban->mapi[sokoban->yp][sokoban->xp] = 'O';
        }
        sokoban->yp -= 1;
        sokoban->mapi[sokoban->yp][sokoban->xp] = 'P';
        displaymap(sokoban);
    }
}

void    short_down(map_t *sokoban)
{
    if (sokoban->mapi[sokoban->yp+1][sokoban->xp] == '#')
        displaymap(sokoban);
    else if (sokoban->mapi[sokoban->yp+1][sokoban->xp] == 'O') {
        sokoban->mapi[sokoban->yp][sokoban->xp] = ' ';
        if (is_on_o(sokoban) == 1) {
            sokoban->mapi[sokoban->yp][sokoban->xp] = 'O';
        }
        sokoban->yp += 1;
        sokoban->mapi[sokoban->yp][sokoban->xp] = 'P';
        displaymap(sokoban);
    }
}

void    short_left(map_t *sokoban)
{
    if (sokoban->mapi[sokoban->yp][sokoban->xp-1] == '#') {
        displaymap(sokoban);
    }
    else if (sokoban->mapi[sokoban->yp][sokoban->xp-1] == 'O') {
        sokoban->mapi[sokoban->yp][sokoban->xp] = ' ';
        if (is_on_o(sokoban) == 1) {
            sokoban->mapi[sokoban->yp][sokoban->xp] = 'O';
        }
        sokoban->xp -= 1;
        sokoban->mapi[sokoban->yp][sokoban->xp] = 'P';
        displaymap(sokoban);
    }
}

void    short_right(map_t *sokoban)
{
    if (sokoban->mapi[sokoban->yp][sokoban->xp+1] == '#')
        displaymap(sokoban);
    if (sokoban->mapi[sokoban->yp][sokoban->xp+1] == 'O') {
        sokoban->mapi[sokoban->yp][sokoban->xp] = ' ';
        if (is_on_o(sokoban) == 1) {
            sokoban->mapi[sokoban->yp][sokoban->xp] = 'O';
        }
        sokoban->xp += 1;
        sokoban->mapi[sokoban->yp][sokoban->xp] = 'P';
        displaymap(sokoban);
    }
}
