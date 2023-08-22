#include "main.h"

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
			return (print_int(va_arg(args, int)));

		case 'i':
			return (print_int(va_arg(args, int)));
		default:
			return (0);
	}
}
