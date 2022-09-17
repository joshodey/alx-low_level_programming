#include <main.h>

/**
 * main - check for uppercase
 *
 * Description: check for uppercase letters
 * Return: 0
 */
int _isupper(int c)
{
	if ((c >= 'A') &&  (c<= 'Z'))
	{
		return (1);
	}
	return (0);
