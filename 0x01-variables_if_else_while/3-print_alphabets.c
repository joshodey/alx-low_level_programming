#include <stdio.h>

/**
 * main - print lowercase and uppercase
 *
 * Description: print alphabets in lowercase
 * then uppercase
 * Return: 0
 */
int main(void)
{
	char small_letters;
	char capital_letters;

	for (small_letters = 'a' ; small_letters <= 'z' ; small_letters++)
	{
		putchar(small_letters);
	}
	for (capital_letters = 'A' ; capital_letters <= 'Z' ; capital_letters++)
	{
		putchar(capital_letters);
	}
	putchar('\n');
	return (0);
}
