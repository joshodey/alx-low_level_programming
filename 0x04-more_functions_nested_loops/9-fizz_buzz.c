#include <stdio.h>

/**
 * main - fizz buzz challenge
 *
 * Description: prints 1 to 100
 * Return: 0
 */
int main(void)
{
	for (int i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizz buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("buzz ");
		}
		else 
		{
			printf("%d ", i);
	}
	return (0);
}
