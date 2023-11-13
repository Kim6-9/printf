#include "main.h"

/**
 * print_hexa - print hex number.
 * @val: args
 * Return: count
 */
int print_hexa(va_list val)
{
	int index;
	int *array;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int flag = num;

	for (; num / 16 != 0; num /= 16, count++)
	;
	count++;
	array = malloc(count * sizeof(int));

	for (index = 0; index < count; index++)
	{
		array[index] = flag % 16;
		flag /= 16;
	}
	for (index = count - 1; index >= 0; index--)
	{
		if (array[index] > 9)
			array[index] = array[index] + 39;
		_putchar(array[index] + '0');
	}
	free(array);
	return (count);
}
/**
 * print_hexa_aux - print hexa number.
 * @num: args.
 * Return: count.
 */
int print_hexa_aux(unsigned long int num)
{
	long int index;
	long int *array;
	long int count = 0;
	unsigned long int flag = num;

	for (; num / 16 != 0; num /= 16, count++)
	;
	count++;
	array = malloc(count * sizeof(long int));

	for (index = 0; index < count; index++)
	{
		array[index] = flag % 16;
		flag /= 16;
	}
	for (index = count - 1; index >= 0; index--)
	{
		if (array[index] > 9)
			array[index] = array[index] + 39;
		_putchar(array[index] + '0');
	}
	free(array);
	return (count);
}
/**
 * print_uHEXA - prints in hexgecimal.
 * @val: args.
 * Return: count.
 */
int print_uHEXA(va_list val)
{
	int i;
	int *array;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	for (; num / 16 != 0; num /= 16, count++)
	;
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}

	free(array);
	return (count);
}
/**
 * print_uHEXA_aux - print in hexadecimal number.
 * @num: number
 * Return: count.
 */
int print_uHEXA_aux(unsigned int num)
{
	int i;
	int *array;
	int count = 0;
	unsigned int temp = num;

	for (; num / 16 != 0; num /= 16, count++)
	;
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}

	free(array);
	return (count);
}
/**
 * print_octa - print octa number.
 * @val: args
 * Return: count.
 */
int print_octa(va_list val)
{
	int i;
	int count = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}

