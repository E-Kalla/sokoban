/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** longueur
*/

int my_strlen2(char *str)
{
    int i = 0;

    while (str[i] != '\n') {
        i += 1;
    }
    return (i);
}
