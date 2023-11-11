#include "main.h"
/**
 * _printf - printf replica
 * @format: format of printf
 * Return: index
*/
int _printf(const char *format, ...)
{
	int index = 0;
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	for (; *format; format++)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			index++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			else if (*format == '%')
				write(1, format, 1);

			else if (*format == 'c')
			{
				index = print_char(arg, index);
			}
			else if (*format == 's')
			{
				index = print_str(arg, index);
			}
		}
	}
	va_end(arg);
	return (index);
}
