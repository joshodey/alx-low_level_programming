#include <stdio.h>
#include "main.h"

/**
 * print_numbers: print all digits from
 * 0 - 9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		purchar(i);
	}
