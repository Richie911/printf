#include "main.h"

/**
 * handle_string - function to handle %s
 * @args: argument list
 * Return: int
 */

int handle_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (str == NULL)
	{
		char *null = "(null)";
		for (i = 0; i < 6; i++)
		{
			write(1, &null[i], 1);
		}
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			write(1, &str[i], 1);
		}
	}
	return (i - 1);
}
