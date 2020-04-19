/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main for navy project
*/

#include "my.h"
#include "navy.h"

void help_message(void)
{
    my_putstr("USAGE\n\t./navy [first_player_pid] [navy_positions]\n");
    my_putstr("DESCRIPTION\n\tfirst_player_pid:  only for the 2nd player.");
    my_putstr(" pid of the first player.\n\tnevy_positions:  file ");
    my_putstr("representing the positions of the ships.\n");
}
