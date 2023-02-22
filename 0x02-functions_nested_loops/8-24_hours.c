#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: Exit program.
 */

void jack_bauer(void)
{
char x = '0';
char y = '0';
char a = '0';
char b = '0';
for (x = '0'; x < '3'; ++x)
{
	for (y = '0' ; y < '4';  ++y)
	{
		for (a = '0' ; a < '6';  ++a)
		{
			for (b = '0' ; b <= '9';  ++b)
			{
				putchar(x);
				putchar(y);
				putchar(':');
				putchar(a);
				putchar(b);
				putchar('\n');
			}
		}
	}
}
return (void);
}
