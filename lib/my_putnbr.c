/*
** EPITECH PROJECT, 2022
** Epitech
** File description:
** my_putnbr
*/

#include "../include/lib.h"

void my_putnbr(long long nb)
{
    if (nb < 0) {
        my_putchar('-');
        my_putnbr(nb * -1);
    } else if (nb < 10) {
        my_putchar('0' + nb);
    } else {
        my_putnbr(nb / 10);
        my_putnbr(nb % 10);
    }
}
