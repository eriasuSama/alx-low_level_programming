#include <stdio.h>
#include "main.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	int res, temp, expo;

	expo = 1;
	/*Check negatives*/
	if (n >= 0)
		res = n * -1;
	else
	{
		res = n;
		putchar('-');
	}

	/*Initialize exponent variable*/
	temp = res;
	while (temp <= -10)
	{
		expo *= 10;
		temp /= 10;
	}
	/*Main */
	while (expo >= 1)
	{
		putchar(((res / expo) % 10) * -1 + '0');
		expo /= 10;
	}
}
