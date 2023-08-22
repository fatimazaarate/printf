#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int print_int(int num)
{
	char s[20];
	int counter = 0;

		itoa(num, s, 10);

		while ( s[counter]= '\0')
		{
			counter++;
		}

	return counter;
}
