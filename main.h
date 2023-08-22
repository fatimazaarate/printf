#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int f_specifier(va_list args, char spec);
int print_char(char c);
int print_str(char *str);
int print_int(int number);

#endif
