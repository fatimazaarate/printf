#include <string.h>
#include <unistd.h>

/**
* print_str - prints string and return its length
* @str: string to be printd
*
* Return: number of char printed
*/

int print_str(char *str)
{
	int length = 0;

	if (str == NULL)
		str = "";

while (*str)
{
	if (*str == '\\')
	{
		str++;

		if (*str == 'n')
		{
			write(1, "\n", 1);
			str++;
			length++;
		}
		else if (*str == 't')
		{
			write(1, "\t", 1);
			str++;
			length++;
		}
	}
		else
		{

		write(1, str, 1);
		str++;
		length++;
		}
}
	return (length);
}
