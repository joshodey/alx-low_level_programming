#include <stdio.h>

/**
 * main - prints lowercase letters
 *
 * Description: prints all alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char letters;
		for (letters = 'a' ; letters <= 'z' ; letters++)
		{
			putchar(letters);
		}
		putchar('\n');
		return (0);
}
