/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** deplacement
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"
#include <ncurses.h>

void    upper(map_t *sokoban)
{
    if (sokoban->mapi[sokoban->yp-1][sokoban->xp] == ' ') {
        sokoban->mapi[sokoban->yp][sokoban->xp] = ' ';
        if (is_on_o(sokoban) == 1) {
            sokoban->mapi[sokoban->yp][sokoban->xp] = 'O';
        }
        sokoban->yp -= 1;
        sokoban->mapi[sokoban->yp][sokoban->xp] = 'P';
        displaymap(sokoban);
    }
    else if(sokoban->mapi[sokoban->yp-1][sokoban->xp] == 'X') {
        push_up(sokoban);
        displaymap(sokoban);
    }
    short_up(sokoban);
}

void    down(map_t *sokoban)
{
    if (sokoban->mapi[sokoban->yp+1][sokoban->xp] == ' ') {
        sokoban->mapi[sokoban->yp][sokoban->xp] = ' ';
        if (is_on_o(sokoban) == 1) {
            sokoban->mapi[sokoban->yp][sokoban->xp] = 'O';
        }
        sokoban->yp += 1;
        sokoban->mapi[sokoban->yp][sokoban->xp] = 'P'; 
        displaymap(sokoban);
    }
    else if (sokoban->mapi[sokoban->yp+1][sokoban->xp] == 'X') {
        push_down(sokoban);
        displaymap(sokoban);
    }
    short_down(sokoban);
}

void    left(map_t *sokoban)
{
    if (sokoban->mapi[sokoban->yp][sokoban->xp-1] == ' ') {
        sokoban->mapi[sokoban->yp][sokoban->xp] = ' ';
        if (is_on_o(sokoban) == 1) {
            sokoban->mapi[sokoban->yp][sokoban->xp] = 'O';
        }
        sokoban->xp -= 1;
        sokoban->mapi[sokoban->yp][sokoban->xp] = 'P';
        displaymap(sokoban);
    }
    else if(sokoban->mapi[sokoban->yp][sokoban->xp-1] == 'X') {
        push_left(sokoban);
        displaymap(sokoban);
    }
    short_left(sokoban);
}

void    right(map_t *sokoban)
{
    if (sokoban->mapi[sokoban->yp][sokoban->xp+1] == ' ') {
        sokoban->mapi[sokoban->yp][sokoban->xp] = ' ';
        if (is_on_o(sokoban) == 1) {
            sokoban->mapi[sokoban->yp][sokoban->xp] = 'O';
        }
        sokoban->xp += 1;
        sokoban->mapi[sokoban->yp][sokoban->xp] = 'P';
        displaymap(sokoban);
    }
    else if(sokoban->mapi[sokoban->yp][sokoban->xp+1] == 'X') {
        push_right(sokoban);
        displaymap(sokoban);
    }
    short_right(sokoban);
}
