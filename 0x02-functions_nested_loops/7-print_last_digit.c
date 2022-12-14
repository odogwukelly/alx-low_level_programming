#include "main.h"

/**
 * print_last_digit - a code that print the last digit of a number
 * @p: integal argument
 * Return: the last digit
 */

int print_last_digit(int p)
{
	int a;

	if (p < 0)
	{
		p = -p;
		a = p % 10;
	_putchar(a + '0');
	}
	return (a);
}
