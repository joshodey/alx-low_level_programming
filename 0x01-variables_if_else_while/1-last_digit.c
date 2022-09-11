#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */



/* betty style doc for function main goes there */
/*
 * main - print the last digit of the number stored in the variable n
 * and shows whether last digit is 0, greater than 5 or less than 6
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
		int n, last_digit;

			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
					if ((n % 10) = 0)
						printf("Last digit of %d is %d, and is 0", n, last_digit);
					else if ((n % 10) < 6 && (n % 10) != 0)
						printf("Last digit of %d is %d, and is less than 6 and not 0", n, last_digit);
					else printf("Last digit of %d is %d, and is greater than 5", n, last_digit);
					return (0);
}
