#include <string.h>
#include <unistd.h>

int print_str(char *str)
{
	int length;

	if (str == NULL)
		str = "";

	length = strlen(str);

	write(1, str, length);

	return (length);
}
