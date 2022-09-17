#include "main.h"

/**
 * main - identify digits
 *
 * Description: Identify digit in text
 * Return: 0
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c < 10))
	{
		return (1);
	}
	return (0);
}
