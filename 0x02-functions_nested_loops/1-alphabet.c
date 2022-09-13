#include <stdio.h>

/**
 * main - prints lowercase letters
 *
 * Description: prints all alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char print_alphabet;
		for (print_alphabet = 'a' ; print_alphabet <= 'z' ; print_alphabet++)
		{
			putchar(print_alphabet);
		}
		putchar('\n');
		return (0);
}
