#include "main.h"
/**
 * print_int - prints int
 * @args: arg
 * Return: num of chars
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num, len = n % 10, digit, x = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (len < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		len = -len;
		i++;
	}
	if (num > 0)
	{
		for (; num / 10 != 0; x *= 10, num /= 10)
		;
		num = n;
		for (; x > 0; x /= 10)
		{
			digit = num / x;
			_putchar(digit + '0');
			num = num - (digit * x);
			i++;
		}
	}
	_putchar(len + '0');

	return (i);
}

/**
 * print_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int print_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, len = n % 10, digit;
	int i = 1;
	int x = 1;

	n = n / 10;
	num = n;

	if (len < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		len = -len;
		i++;
	}
	if (num > 0)
	{
		for (; num / 10 != 0; x *= 10, num /= 10)
		;
		num = n;
		for (; x > 0; x /= 10)
		{
			digit = num / x;
			_putchar(digit + '0');
			num = num - (digit * x);
			i++;
		}
	}
	_putchar(len + '0');

	return (i);
}
/**
 * print_unsint - prints unsigned int
 * @args: argument
 * Return: num of printed characters
 */
int print_unsint(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, len = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (len < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		len = -len;
		i++;
	}

	if (num > 0)
	{
		for (; num / 10 != 0; exp *= 10, num /= 10)
		;

		num = n;

		for (; exp > 0; exp /= 10)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			i++;
		}
	}

	_putchar(len + '0');

	return (i);
}
/**
 * print_binary - print binary number.
 * @val: args.
 * Return: 1.
 */
int print_binary(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
