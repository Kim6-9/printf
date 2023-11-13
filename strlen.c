#include "main.h"
/**
 * _strlen -  get the string's length
 * @s: char pointer
 * Return: len.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != 0; len++)
	;
	return (len);

}
/**
 * _strlenc - strlen for s
 * @s: char pointer
 * Return: len
 */
int _strlenc(const char *s)
{
	int len;

	for (len = 0; s[len] != 0; len++)
		;
	return (len);
}
