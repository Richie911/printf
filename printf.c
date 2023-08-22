#include "main.h"

/**
 * _printf - works like printf
 * @format: format of string
 * Return: integer
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ch;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (ch = format; *ch != '\0'; ch++)
	{
		if (*ch == '%' && (*(ch + 1)) == '\0')
			return (-1);
		if (*ch == '%' && (*(ch + 1)) != '\0')
		{
			ch++;
			if (*ch == 'c')
				handle_char(args);
			else if (*ch == 's')
				count += handle_string(args);
			else if (*ch == '%')
				handle_percent();
			else if (*ch == 'i' || *ch == 'd')
				handle_int(args);
			else
			{
				char c = '%';

				write(1, &c, 1);
				write(1, ch, 1);
				count++;
			}
			count++;
		}
		else
		{
			write(1, ch, 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
