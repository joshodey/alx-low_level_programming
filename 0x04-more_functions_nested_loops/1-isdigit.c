#include "main.h"

/**
 * _isdigit - identify digits
 *
 * Description: Identify digit in text
 * @c: is a funtion
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
