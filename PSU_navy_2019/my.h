/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my own stuff
*/

#ifndef MY_H_
# define MY_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <sys/sysmacros.h>
#include <stdbool.h>
#include <dirent.h>
#include <time.h>

int my_strisnum(char *str);
int my_strlen(char *str);
int my_getnbr(char const *str);
int my_putnbr(int nb);

#endif
