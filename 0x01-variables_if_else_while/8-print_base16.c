#include <stdio.h>

/**
 * main - print hexadecimal
 *
 * Description: print hexadecimals
 * Return: 0
 */
int main(void)
{
	char num;
	char let;

	for (num = 0 ; num <= 9 ; num++)
	{
		putchar(num);
	}
	for (let = 'a' ; let < 'f' ; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
