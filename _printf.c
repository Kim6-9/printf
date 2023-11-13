#include "main.h"
/**
 * _printf - printf replica
 * @format: format identifier
 * Return: the printed string's length
 */
int _printf(const char * const format, ...)
{
	f_match m[] = {
		{"%s", print_str}, {"%c", print_char},
		{"%%", print_37},
		{"%i", print_int}, {"%d", print_dec}, {"%r", print_rev},
		{"%R", print_rot13}, {"%b", print_binary}, {"%u", print_unsint},
		{"%o", print_octa}, {"%x", print_hexa}, {"%X", print_uHEXA},
		{"%S", print_string}, {"%p", print_ptr}
	};

	va_list args;
	int i, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		for (j = 13; j >= 0; j--)
		{
			if (m[j].x[0] == format[i] && m[j].x[1] == format[i + 1])
			{
				len += m[j].fun(args);
				i = i + 1;
				break;
			}
		}
		if (j < 0)
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(args);
	return (len);
}
