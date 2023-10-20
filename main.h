#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int _strlen(char *s);
int _strlenconst(const char *s);
int print_37(void);
int print_i(va_list args);
int print_d(va_list args);
int print_b(va_list args);

#endif
