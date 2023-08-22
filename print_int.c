#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
* print_int - convert integer to string
* @number: integer to convert
*
* Return: number of character printed
*/

int print_int(int number)
{
	char s[20];

	sprintf(s, "%d", number);
	write(1, s, strlen(s));

	return (strlen(s));
}
