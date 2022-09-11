#include <stdio.h>

/**
 * main - print letters in reversal
 *
 * Description - show letters from z to a
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'z' ; letters >= 'a' ; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
