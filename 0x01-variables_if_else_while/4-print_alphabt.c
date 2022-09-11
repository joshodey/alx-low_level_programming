#include <stdio.h>

/**
 * main - print alphabets in lowercase
 *
 * Description: print alphabets in lowercase
 * with exceptions of 'q' and 'e'
 * return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'a' ; letters <= 'z' ; letters++)
	{
		if (letters != 'q' && letters != 'e')
		{
			putchar(letters);
		}
	}
	putchar('\n');
	return (0);
}
