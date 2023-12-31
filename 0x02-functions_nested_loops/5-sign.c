#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 * Return: 1 if n > 0, 0 if n is 0, -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1); /* Positive number */
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1); /* Negative number */
	}
	else
	{
		_putchar('0');
		return (0); /* Zero */
	}
}
