#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
* print_uns - convert signed to unsigned then to characters
* @num: number to procees
*
* Return: number of chars
*/

int print_uns(int num)
{
	char s[20];

	if (num < 0)
		num = -num;

	sprintf(s, "%d", num);
	write(1, s, strlen(s));

	return (strlen(s));
}
