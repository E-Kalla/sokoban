/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** displaymap
*/

#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"


int	print_lost(map_t *sokoban)
{
    endwin();
    exit (1);
}

int	check_lost(map_t *sokoban)
{
	int a = 0;
    int j = 0;
	int i = 0;

    for (; sokoban->mapi[i]; i += 1) {
        for (; sokoban->mapi[i][j] ; j +=1) {
                short_lost(sokoban,&i,&j);
        }
        j = 0;
    }
	return (0);
}

int	check_win(map_t *sokoban)
{
    int i = 0;

    while (sokoban->xoinmap[i]) {
        if (sokoban->mapi[sokoban->yoinmap[i]][sokoban->xoinmap[i]] == 'X')
        {
            i += 1;
        } else return (0) ;
    }
    endwin();
    exit(0);
}

void displaymap(map_t *sokoban)
{
    int a = 0;
    int b = 0;
    check_win(sokoban);
	check_lost(sokoban);
    initscr();
	check_window(sokoban);
	keypad(stdscr, TRUE);
    for (int i = 0; sokoban->mapi[i]; i += 1) {
        move((LINES / 2) - sokoban->midy + b,(COLS / 2) - sokoban->midx);
        printw(sokoban->mapi[i]);
        b += 1;
    }
    noecho();
    while (a != 32) {
        movement(sokoban);
        a = getch();
    }
    endwin();
}
