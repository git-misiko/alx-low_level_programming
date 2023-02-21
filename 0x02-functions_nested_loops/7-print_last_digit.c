#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - function that prints
 * the last digit of a number
 * @r: passed argument
 *
 * Return: end program.
 */

int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
