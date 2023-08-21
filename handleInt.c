#include "main.h"

/**
 * handle_int - function that handls %i and %d
 * @args: list from printf
 * Return: void;
 */

void handle_int(va_list args)
{
	int num = va_arg(args, int);
	int length = snprintf(NULL, 0, "%d", num);
	char *str = (char *)malloc((length + 1) * sizeof(char));

	if (str != NULL)
	{
		snprintf(str, length + 1, "%d", num);
		write(1, str, length);
		free(str);
	}
}
