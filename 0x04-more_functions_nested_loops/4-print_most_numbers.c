#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print most numbers
 * among numbers
 * Description: print most
 * Return: 0
 */
void print_most_numbers(void);
{
	int c;

	for (c = 0 ; c <= 9 ; c++)
	{
		if ( c == 2 || c == 4)
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
}
