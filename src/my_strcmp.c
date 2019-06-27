/*
** EPITECH PROJECT, 2018
** strcmp
** File description:
** compare
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] || s2[i]) {
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] > s2[i])
            return (1);
        i += 1;
    }
    return (0);
}
