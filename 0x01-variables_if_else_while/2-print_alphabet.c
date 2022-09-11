#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 *
 * Description: print all alphabet in lowercase
 * this function uses putchar twice
 * return: 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
