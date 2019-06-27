/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** str _ to word array
*/

#include <stdlib.h>
#include "../include/my.h"

int     verif_char(char c)
{
    if (c == '\n' || c == '\0')
        return (0);
    return (1);
}

int	line_count(char *str)
{
    int   i;
    int   word;

    word = 0;
    i = 0;
    while (str[i])
    {
        if ((str[i]) == '\n')
            word = word + 1;
        i = i + 1;
    }
    return (word);
}

char	**my_str_to_wordtab(char *str)
{
    int	j = 0;
    int	i = 0;
    char	**newbuff;
    int	len = 0;

    newbuff = malloc((line_count(str) + 1) * sizeof(char *));
    while (str != NULL && str[i])
    {
        if (verif_char(str[i]))
            len = len + 1;
        if (verif_char(str[i]) == 1 && verif_char(str[i + 1]) == 0)
        {
            newbuff[j] = malloc(len + 1);
            my_strncpy(newbuff[j], &str[i - len + 1], len + 1);
            len = 0;
            j = j + 1;
        }
        i = i + 1;
    }
    return (newbuff);
}
