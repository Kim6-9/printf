#include "main.h"

/**
 * print_ptr - prints hexa address.
 * @val: args
 * Return: count
 */
int print_ptr(va_list val)
{
	void *ptr;
	char *str = "(nil)";
	long int l;
	int x;
	int i;

	ptr = va_arg(val, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	l = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	x = print_hexa_aux(l);
	return (x + 2);
}
/**
 * print_rot13 - convert str to rot13
 * @args: struct va_arg printf arguments
 * Return: count
 *
 */
int print_rot13(va_list args)
{
	int index, x, count = 0;
	int flag = 0;
	char *s = va_arg(args, char*);
	char str[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot13[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (index = 0; s[index]; index++)
	{
		flag = 0;
		for (x = 0; str[x] && !flag; x++)
		{
			if (s[index] == str[x])
			{
				_putchar(rot13[x]);
				count++;
				flag = 1;
			}
		}
		if (!flag)
		{
			_putchar(s[index]);
			count++;
		}
	}
	return (count);
}
/**
 * print_37 - print char 37.
 * Return: 1.
 */
int print_37(void)
{
	_putchar(37);
	return (1);
}

