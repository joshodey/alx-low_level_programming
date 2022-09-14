#include <stdio.h>

/**
 * main - prints lowercase letters
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
		return (0);
}
