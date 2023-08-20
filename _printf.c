#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int index;

	va_start(args, format);

	while(format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			index++;
		}
		else
		{
			format++;
			if (format == 'c')
			{
				
		
