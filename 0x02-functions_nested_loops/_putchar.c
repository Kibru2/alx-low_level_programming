#include <unistd.h>

/**
 * Description - program that prints _putchar, followed by a new line
 * Return: 1 (success)
 * Return: -1 (error)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

