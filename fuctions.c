#include "main.h"
/**
 * print_char - prints char
 * @arg: printf arguments
 * @index: number of characters
 * Return: index+1
 */
int print_char(va_list arg, int index)
{
	char print_c = va_arg(arg, int);

	write(1, &print_c, 1);
	return (index + 1);
}

/**
 * print_str - prints string
 * @arg: printf arguments
 * @index: number of characters
 * Return: index + strlen
 */
int print_str(va_list arg, int index)
{
	int i;
	char *print_s = va_arg(arg, char*);
	char c;

	for (i = 0; (c = print_s[i]) != '\0'; i++)
	{
		write(1, &c, 1);
		index++;
	}
	return (index);
}

/**
 * print_int - print integer
 * @arg: printf arguments
 * @index: number of characters
 * Return: number of integers printed
 */
int print_int(va_list arg, int index)
{
	int n = va_arg(arg, int);
	int temp, num_len, i;
	char buffer[12];

	if (n < 0)
	{
		write(1, "-", 1);
		index++;
		n = -n;
	}
	temp = n;
	num_len = 0;

	if (temp == 0)
		num_len = 1;
	else
	{
		while (temp != 0)
		{
			temp /= 10;
			num_len++;
		}
	}
	for (i = num_len - 1; n > 0; i--)
	{
		buffer[i] = '0' + n % 10;
		n /= 10;
	}
	write(1, buffer, num_len);
	index += num_len;

	return (index);
}
