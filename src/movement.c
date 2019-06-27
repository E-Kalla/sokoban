/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** movement.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"
#include <ncurses.h>

void check_better(map_t *sokoban, int i, int j)
{
    if (sokoban->mapi[i-1][j] == '#' && sokoban->mapi[i-1][j+1] == '#') {
        if (sokoban->mapi[i][j+1] == 'X' || sokoban->mapi[i][j-1] == 'X')
            print_lost(sokoban);
    }
    if (sokoban->mapi[i+1][j] == '#' && sokoban->mapi[i+1][j+1] == '#') {
        if (sokoban->mapi[i][j+1] == 'X' || sokoban->mapi[i][j-1] == 'X')
            print_lost(sokoban);
    }
    if (sokoban->mapi[i-1][j+1] == '#' && sokoban->mapi[i][j+1] == '#') {
        if (sokoban->mapi[i-1][j] == 'X' || sokoban->mapi[i+1][j] == 'X')
            print_lost(sokoban);
    }
    if (sokoban->mapi[i-1][j-1] == '#' && sokoban->mapi[i][j-1] == '#') {
        if (sokoban->mapi[i-1][j] == 'X' || sokoban->mapi[i+1][j] == 'X')
            print_lost(sokoban);
    }
}
void check_arround(map_t *sokoban, int i, int j)
{
    if (sokoban->mapi[i][j+1] == '#' && sokoban->mapi[i+1][j] == '#') {
        if (sokoban->save[i][j] != 'O')
            print_lost(sokoban);
    }
    if (sokoban->mapi[i][j+1] == '#' && sokoban->mapi[i-1][j] == '#') {
        if (sokoban->save[i][j] != 'O')
            print_lost(sokoban);
    }
    if (sokoban->mapi[i][j-1] == '#' && sokoban->mapi[i+1][j] == '#') {
        if (sokoban->save[i][j] != 'O')
            print_lost(sokoban);
    }
    if (sokoban->mapi[i][j-1] == '#' && sokoban->mapi[i-1][j] == '#') {
        if (sokoban->save[i][j] != 'O')
            print_lost(sokoban);
    }
    check_better(sokoban,i,j);
}

void reload(map_t *sokoban)
{
    move((LINES / 2) + sokoban->midy ,(COLS / 2) + sokoban->midx);
    sokoban->mapi = my_str_to_wordtab(sokoban->map);
    where_are_o(sokoban);
    find_player(sokoban);
    displaymap(sokoban);    
}

int movement(map_t *sokoban)
{
    switch (getch()) {
        case KEY_UP:
            upper(sokoban);
            break;
        case KEY_LEFT:
            left(sokoban);
            break;
        case KEY_DOWN:
            down(sokoban);
            break;
        case KEY_RIGHT:
            right(sokoban);
            break;
        case ' ':
            reload(sokoban);
            break;
        case 27:
            endwin();
            exit (0);
            break;
    }
}
