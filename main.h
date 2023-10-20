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
int print_ui(va_list args);
int print_o(va_list args);
void reverse_array(int *a, int n);
int print_h(va_list args);
int print_H(va_list args);
int print_S(va_list args);
int print_HS(unsigned int n);
int print_p(va_list args);
int print_int_hex(long int p);

#endif
