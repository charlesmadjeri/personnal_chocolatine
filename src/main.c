/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** main
*/

#include "../include/main.h"

int main(int argc, char **argv)
{
    if (argc > 1) 
    
    {
        disp_help(argv[1]);
        return EXIT_SUCCESS;
    } else {                                  
        int status = launch();
        if (status == 1)
            return 84;
        else
            return EXIT_SUCCESS;
    }
}
