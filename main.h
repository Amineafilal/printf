#ifndef PRINT
#define PRINT

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int main(void);
void print_number(int n);
int _printf(const char *format, ...);
int _strlen(char *p);
int _countDigits(int value);

#endif
