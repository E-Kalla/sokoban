/*
** EPITECH PROJECT, 2018
** ncurses
** File description:
** test ncurse
*/

#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void    get_middlemap(map_t *sokoban)
{
    sokoban->midx = 0;
    sokoban->midy = 0;
    int j = 0;
    int i = 0;

    for (; sokoban->mapi[i]; i += 1) {
        for (; sokoban->mapi[i][j] ; j+=1) {
            short_middle_map(sokoban,&j);
        }
        j = 0;
    }
    sokoban->midy = i/2;
}

int 	is_on_o(map_t *sokoban)
{
    for (int i = 0; sokoban->xoinmap[i] != '\0'; i += 1) {
        if (sokoban->xp == sokoban->xoinmap[i] && 
                sokoban->yp == sokoban->yoinmap[i])
            return (1);
    }
    return (0);
}

void 	where_are_o(map_t *sokoban)
{
    int a = 0;
    int j = 0;
    int i = 0;

    for (; sokoban->mapi[i]; i += 1) {
        for (; sokoban->mapi[i][j] ; j+=1) {
            short_where_o(sokoban,&i,&j,&a);
        }
        j = 0;
    }
}

int 	main(int ac, char **argv)
{
    map_t sokoban;
    sokoban.map = malloc(sizeof(char) * 1000);
    sokoban.xoinmap = malloc(sizeof(int) * 1000);
    sokoban.yoinmap = malloc(sizeof(int) * 1000);
    check_arg(ac,argv);
    sokoban.map = getmap(sokoban.map,argv[1]);
    sokoban.mapi = my_str_to_wordtab(sokoban.map);
    sokoban.save = my_str_to_wordtab(sokoban.map);
    get_middlemap(&sokoban);
    check_map(sokoban.map);
    where_are_o(&sokoban);
    find_player(&sokoban);
    displaymap(&sokoban);
    refresh();
    return (0);
}
