#include "main.h"
/**
 * handle_char - function to handle %c
 * @args: argument list
 * Return: void
 */

void handle_char(va_list args)
{
	char character = va_arg(args, int);

	if (character >= 0 || <= 255)
		write(1, &character, 1);
}
