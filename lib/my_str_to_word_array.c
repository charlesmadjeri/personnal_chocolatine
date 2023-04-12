/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** my_str_to_word_array
*/

#include "../include/main.h"
#include "../include/lib.h"

char *trim(char *str)
{
    char *end = str + my_strlen(str) - 1;

    while ((*str == ' ' || *str == '\t') && str <= end)
        str++;
    while ((end > str) && (*end == ' ' || *end == '\t'))
        end--;
    *(end + 1) = '\0';
    return str;
}

int count_delimiters(char *str)
{
    int count = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 32 || str[i] == 9)
            count++;
    }
    return count;
}

int my_strlen_to_delim(char const *str)
{
    int i;

    for (i = 0 ; (str[i] != 32) && (str[i] != 9) && (str[i] != '\0'); i++);
    return i;
}

char *my_strcpy_to_delim(char *dest, char const *src)
{
    for (int i = 0; (src[i] != 32) && (src[i] != 9)
    && (i <= my_strlen(src)); i++)
        dest[i] = src[i];
    return dest;
}

char **my_str_to_word_array(char *str)
{
    int len_to_delimiter = 0;
    str = trim(str);
    int nb_words = count_delimiters(str);
    char **word_array = malloc(sizeof(char *) * (nb_words + 1));
    word_array[nb_words] = malloc(sizeof(NULL));
    word_array[nb_words] = NULL;

    for (int i = 0; i < nb_words; i++, str += (len_to_delimiter + 1)) {
        len_to_delimiter = my_strlen_to_delim(str);
        word_array[i] = malloc(sizeof(char) * (len_to_delimiter + 1));
        word_array[i][len_to_delimiter] = '\0';
        my_strcpy_to_delim(word_array[i], str);
    }
    return word_array;
}
