#include <stdio.h>

/**
* print_hexa - convert int to hexa
* @number: integer to convert
*
* Return: number of char
*/

int print_hexa(int number)
{
	int i = 0, remainder, j = 0, length;
	char tmp;
	char hex[30];

	while (number > 0)
	{
		remainder = number % 16;

		if (remainder < 10)
		{
			hex[i] = '0' + remainder;
		}
		else
		{
			hex[i] = 'a' + (remainder - 10);
		}
		i++;
		number /= 16;
	}

	length = i;

	hex[i] = '\0';

	while (j < i)
	{
		tmp = hex[j];
		hex[j] = hex[length - 1 - j];
		hex[length - 1 - j] = tmp;
		j++;
	}

	return (length);
}
