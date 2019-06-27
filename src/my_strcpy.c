/*
** EPITECH PROJECT, 2018
** strcpy
** File description:
** copy
*/

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i]) {
        dest[i] = src[i];
        i += 1;
    }
    return (dest);
}
