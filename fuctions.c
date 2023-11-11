#include "main.h"
/**
 * print_char - prints char
 * @arg: printf arguments
 * @index: number of characters
 * Return: index + 1
*/
int print_char(va_list arg, int index)
{
	char print_c = va_arg(arg, int);

	write(1, &print_c, 1);
	return (index + 1);
}

/**
 * print_s - prints string
 * @arg: printf arguments
 * @index: number of characters
 * Return: index + strlen
*/
int print_str(va_list arg, int index)
{
	char *print_s = va_arg(arg, char*);
	int str_len = strlen(print_s);

	write(1, print_s, str_len);
	return (index + str_len);
}
