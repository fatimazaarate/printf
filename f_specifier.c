#include "main.h"

/**
* f_specifier - function to handle different format specifiers
* @args: containing the veriadic arguments
* @spec: the format specifier character
*
* Return: Number of characters printed
*/

int f_specifier(va_list args, char spec)
{
	char *s;

	switch (spec)
	{
		case 'c':
			return (print_char(va_arg(args, int)));
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "";

			return (print_str(s));

		case '%':
			return (print_char('%'));

		case 'd':
		case 'i':
			return (print_int(va_arg(args, int)));

		case 'u':
			return (print_unsigned(va_arg(args, int)));

		case 'x':
			return (print_hexa(va_arg(args, int)));

		default:
			return (0);
	}
}
