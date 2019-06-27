/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** push.c
*/

#include "../include/my.h"
#include <ncurses.h>

void    push_up(map_t *sokoban)
{
    if ((sokoban->mapi[sokoban->yp-2][sokoban->xp] == 'O')
            || (sokoban->mapi[sokoban->yp-2][sokoban->xp] == ' ')) 
    {
        if (is_on_o(sokoban) == 1) {
            sokoban->mapi[sokoban->yp][sokoban->xp] = 'O';
        }
        else sokoban->mapi[sokoban->yp][sokoban->xp] = ' ';
        sokoban->yp -= 1;
        sokoban->mapi[sokoban->yp][sokoban->xp] = 'P';
        sokoban->mapi[sokoban->yp-1][sokoban->xp] = 'X';
    }
    displaymap(sokoban);
}

void    push_down(map_t *sokoban)
{
    if ((sokoban->mapi[sokoban->yp+2][sokoban->xp] == 'O') ||
            (sokoban->mapi[sokoban->yp+2][sokoban->xp] == ' ')) 
    {
        if (is_on_o(sokoban) == 1) {
            sokoban->mapi[sokoban->yp][sokoban->xp] = 'O';
        }
        else sokoban->mapi[sokoban->yp][sokoban->xp] = ' ';
        sokoban->yp += 1;
        sokoban->mapi[sokoban->yp][sokoban->xp] = 'P';
        sokoban->mapi[sokoban->yp+1][sokoban->xp] = 'X';
    }
    displaymap(sokoban);
}

void    push_left(map_t *sokoban)
{
    if ((sokoban->mapi[sokoban->yp][sokoban->xp-2] == 'O') ||
            (sokoban->mapi[sokoban->yp][sokoban->xp-2] == ' ')) 
    {
        if (is_on_o(sokoban) == 1) {
            sokoban->mapi[sokoban->yp][sokoban->xp] = 'O';
        }
        else sokoban->mapi[sokoban->yp][sokoban->xp] = ' ';
        sokoban->xp -= 1;
        sokoban->mapi[sokoban->yp][sokoban->xp] = 'P';
        sokoban->mapi[sokoban->yp][sokoban->xp-1] = 'X';
    }
    displaymap(sokoban);
}

void    push_right(map_t *sokoban)
{
    if ((sokoban->mapi[sokoban->yp][sokoban->xp+2] == 'O') ||
            (sokoban->mapi[sokoban->yp][sokoban->xp+2] == ' ')) 
    {
        if (is_on_o(sokoban) == 1) {
            sokoban->mapi[sokoban->yp][sokoban->xp] = 'O';
        }
        else sokoban->mapi[sokoban->yp][sokoban->xp] = ' ';
        sokoban->xp += 1;
        sokoban->mapi[sokoban->yp][sokoban->xp] = 'P';
        sokoban->mapi[sokoban->yp][sokoban->xp+1] = 'X';
    }
    displaymap(sokoban);
}
