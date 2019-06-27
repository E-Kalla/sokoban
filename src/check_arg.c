/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** check_arg
*/

#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"
#include <stdlib.h>

void    check_window(map_t *sokoban)
{
    if (sokoban->midx * 2 > COLS) {
        move(LINES / 2, (COLS / 2) - 20);
        printw("EXTEND YOUR WINDOW");
    }

    if (sokoban->midy * 2 > LINES) {
        move(LINES / 2, (COLS / 2) - 20);
        printw("EXTEND YOUR WINDOW");
    }

}

int     check_arg(int ac, char **argv)
{
    if (ac != 2)
        exit (84);
    if (compare(argv[1],"-h") == 1)
        display_desc();

    return (0);
}
