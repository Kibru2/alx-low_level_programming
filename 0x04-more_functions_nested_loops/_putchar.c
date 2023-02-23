#include "main.h"
#include <unistd.h>
/**
 * _putchar - character C to stdout
 * @C: print
 *
 * Return: 1 success
 * Return: -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
