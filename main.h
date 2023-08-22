#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


int _printf(const char *format, ...);

void handle_int(va_list args);

int handle_string(va_list args);

void handle_char(va_list args);

void handle_percent(void);

#endif
