#include "main.h"

/**
 * print_char - prints char
 * @val: arg
 * Return: 1
 */
int print_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
}
/**
 * print_str - print string.
 * @val: arg
 * Return: string's length
 */

int print_str(va_list val)
{
	char *s;
	int index, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (index = 0; index < len; index++)
			_putchar(s[index]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (index = 0; index < len; index++)
			_putchar(s[index]);
		return (len);
	}
}
/**
 * print_string - print exclusive strings.
 * @val: arg
 * Return: string'str length
 */

int print_string(va_list val)
{
	char *str;
	int index, len = 0;
	int count;

	str = va_arg(val, char *);
	if (str == NULL)
		str = "(null)";
	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] < 32 || str[index] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			count = str[index];
			if (count < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_uHEXA_aux(count);
		}
		else
		{
			_putchar(str[index]);
			len++;
		}
	}
	return (len);
}
/**
 * print_rev - prints a str in reverse
 * @args: struct va_arg printf arguments
 *
 * Return: the string
 */
int print_rev(va_list args)
{

	char *str = va_arg(args, char*);
	int index;
	int cout = 0;

	if (str == NULL)
		str = "(null)";
	while (str[cout] != '\0')
		cout++;
	for (index = cout - 1; index >= 0; index--)
		_putchar(str[index]);
	return (cout);
}
