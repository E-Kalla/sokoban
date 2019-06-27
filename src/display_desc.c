/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** display_desc
*/

#include "../include/my.h"

void    display_desc(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map file representing the warehouse map, containing '#'");
    my_putstr(" for walls,\n         'P' for the player,");
    my_putstr(" 'X' for boxes and 'O'");
    my_putstr("for storage locations.\n");
}

void    short_lost(map_t *sokoban, int *i, int *j)
{
    if (sokoban->mapi[*i][*j] == 'X')
        check_arround(sokoban,*i,*j);
}

void    short_middle_map(map_t *sokoban, int *j)
{
    if (*j > sokoban->midx)
        sokoban->midx = *j / 2;
}

void    short_where_o(map_t *sokoban,int *i, int *j, int *a)
{
    if (sokoban->mapi[*i][*j] == 'O') {
        sokoban->xoinmap[*a] = *j;
        sokoban->yoinmap[*a] = *i;
        *a += 1;
    }
}