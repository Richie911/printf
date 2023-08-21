#include "main.h"

/**
 * handle_percent - function to handle %%
 * Return: void
 */
void handle_percent(void)
{
	char percent = '%';

	write(1, &percent, 1);
}
