#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if ((low != 'e') && (low != 'q'))
		{
			putchar(low);
			low++;
		}
	}
	putchar('\n');
	return (0);
}
