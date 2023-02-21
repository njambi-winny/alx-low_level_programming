#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int d;

	d = '0';
	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	if (d != '9')
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
