#include "main.h"
/**
 * handle_char - function to handle %c
 * @args: argument list
 * Return: void
 */

void handle_char(va_list args)
{
	int character = va_arg(args, int);

	write(1, &character, 1);
}
