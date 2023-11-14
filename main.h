#ifndef PRINT
#define PRINT

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

void print_number(int n);
int _printf(const char *format, ...);
int _strlen(char *p);
int _countDigits(int value);
int print_char(char c);
int print_i_d(int value);
int print_string(char *ptr);
int print_b(unsigned int n);
int conv_oct(unsigned int n);
int conv_hexa(unsigned int n);
int print_u(unsigned int numb);
int _countDigitsunsignedint(unsigned int value);
void print_unsignedint(char *ptrunint);
#endif
