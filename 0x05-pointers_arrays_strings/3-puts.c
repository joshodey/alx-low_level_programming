#include <stdio.h>
#include "main.h"

_puts - resets the value of given integer to 98
@str: parameter
Description: prints a string
on success: return an error

void _puts(char *str)
{
	int i = 0;
	
	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
