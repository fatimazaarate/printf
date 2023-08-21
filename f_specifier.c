#include "main.h"

int f_specifier(va_list args, char spec)
{
	switch (spec)
	{
		case 'c': 
			return (print_char(va_arg(args, int)));
		case 's': 
			return (print_str(va_arg(args, char *)));
		case '%': 
			return (print_char('%'));
		default:
			return (0);
	}
}


			
