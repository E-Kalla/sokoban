/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** getmap
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

char *getmap(char *map,char *filepath)
{
    int fd;
    int ret = 0;

    fd = open(filepath, O_RDONLY);

    if (fd == -1)
        exit (84);

    while ((ret = read(fd, map, 5000))) {
		map[ret] = '\0';
	}
    return (map);
}