#include "main.h"

/**
 * _strlen - returns
 * @s: the string to be operated on.
 *
 * Return: string to length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
