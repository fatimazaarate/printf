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
	int index = 0;
	char c;
	char *str;

	va_start(args, format);

	if (format == NULL)
		return  (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

		if (*format == 'c')
		{
			c = va_arg(args, int);
			write(1, &c, 1);
			index++;
		}
		else if (*format == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				str = "";
			write(1, str, strlen(str));
			index += strlen(str);
		}
		else if (*format == '%')
		{
			write(1, format, 1);
			index++;
		}
		}
		else
		{
			write(1, format, 1);
			index++;
		}
		format++;
		}

	va_end(args);
	return (index);
}
