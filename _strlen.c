#include "main.h"

/**
 * _strlen - returns the length of a string dereferenced by the pointer
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;
	return (n);
}

/**
 * _strlenconst - returns length of a constant char passed to it as a func
 * @s: pointer to the constant string
 * Return: the length
 */
int _strlenconst(const char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;

	return (n);
}
