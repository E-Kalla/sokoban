/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** find player
*/

#include "../include/my.h"
#include <stdlib.h>

int     find_player(map_t *sokoban)
{
    int i = 0;
    int j = 0;

    while (sokoban->mapi[i]) {
        while (sokoban ->mapi[i][j]) {
            if (sokoban->mapi[i][j] == 'P') {
                sokoban->xp = j;
                sokoban->yp = i;
                return (0);
            }
            j += 1;
        }
        j = 0;
        i += 1;
    }
    exit (84);
}
