#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int ch = 'a';
	int UPP = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (UPP <= 'Z')
	{
		putchar(UPP);
		UPP++;
	}

	putchar('\n');
	return (0);
}
