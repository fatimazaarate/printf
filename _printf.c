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
	int r;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{

	if (*format == '%')
	{
		format++;

		if (*format == '\0')
			break;

		r = f_specifier(args, *format);
		count += r;
	}
	else
	{
		format--;
		write(1, format, 1);
		count++;
	}
	format++;
	}

	va_end(args);
	return (count);
}
