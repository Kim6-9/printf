#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);

/*Functions*/
int print_char(va_list arg, int index);
int print_str(va_list arg, int index);

#endif
