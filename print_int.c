#include <unistd.h>
#include <stdio.h>
#include <string.h>

int print_int(int number)
{
	char s[20];

	sprintf(s, "%d", number);
	write(1, s, strlen(s));

	return (strlen(s));
}
