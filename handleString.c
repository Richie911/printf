#include "main.h"

/**
 * handle_string - function to handle %s
 * @args: argument list
 * Return: void
 */

void handle_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
	}
}
