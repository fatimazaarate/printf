#include <unistd.h>

/**
* print_char - print characters
*@c: the character to be printed
*
* Return: number of char printed
*/

int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
