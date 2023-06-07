#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0
 * @n: input integer
 * Return: 1 if prime or 0 if other
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (is_divisible(n, div));
}

/**
 * is_divisible - checks if num is divisible
 * @num: number to be checked
 * @div: the result of division
 * Return: 1 if divisible or 0 if not divisible
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
