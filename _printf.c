#include "main.h"

/**
* _printf - create our own printf function
* @format: a character string
*
* Return: the number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int num_printed;

	va_start(args, format);

	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}

	while (*format)
	{
	if (*format == '%')
	{
		format++;

		if (*format == '\0')
			break;

		num_printed = f_specifier(args, *format);
		if (num_printed == 0)
		{
			format--;
			print_char('%');
			num_printed = 1;
		}
		count += num_printed;
	}
	else
	{
		count += print_char(*format);
	}

	format++;
	}

	va_end(args);
	return (count);
}
