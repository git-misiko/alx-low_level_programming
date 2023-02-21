//#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: end program.
 */

int main(void)
{
	int i,j,k,l;

	for(int i = 0; i <= 23 ; i++)
	{
		putchar((i/10)+'0');
		putchar((i%10)+'0');
		printf("\n");
		for(int j = 0; j <= 59 ; j++)
		{
			putchar((j/10)+'0');
			putchar((j%10)+'0');
			printf("\n");
		}
	}
	
	 return (0);
}
