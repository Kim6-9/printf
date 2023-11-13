#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match specifiers of printf
 * @x: pointer of specifier l, h for d, i, u, o, x, X
 * @fun: pointer for specifier
 *
 */
typedef struct format
{
	char *x;
	int (*fun)();
} f_match;

int _printf(const char *format, ...);

int print_ptr(va_list val);
int print_hexa_aux(unsigned long int num);
int print_uHEXA_aux(unsigned int num);
int print_string(va_list val);
int print_uHEXA(va_list val);
int print_hexa(va_list val);
int print_octa(va_list val);
int print_unsint(va_list args);
int print_binary(va_list val);
int print_rev(va_list args);
int print_rot13(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int print_37(void);
int print_char(va_list val);
int print_str(va_list val);
int _putchar(char c);
int rev_str(char *s);
int _strlenc(const char *s);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);

#endif
