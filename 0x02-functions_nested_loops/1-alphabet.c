#include <stdio.h>

/**
 * main - prints lowercase letters
 *
 * Description: prints all alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char letters = 'a';
		while (letters <= 'z')
		{
			putchar(letters);
			letters++;
		}
		return (0);
}
