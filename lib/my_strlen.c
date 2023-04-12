/*
** EPITECH PROJECT, 2022
** C_pool
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}
