#include "main.h"

/**
 * print_alphabet - Prints lowercase letters
 *
 * Description: prints all alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char l;

		for (l = 'a' ; l <= 'z' ; l++)
		{
			putchar(l);
		}
		putchar('\n');
}
