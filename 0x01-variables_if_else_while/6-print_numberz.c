#include <stdio.h>

/**
 * main - print numbers in 10
 *
 * Description: print all numbers in base 10
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
