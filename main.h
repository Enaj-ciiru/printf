#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * struct fmtspec - defines a structure for symbols and functions
 * @flag: c, s, f, d ...
 * @fptr: the function associated
 */
struct fmtspec
{
	char *flag;
	int (*fptr)(va_list);
};
typedef struct fmtspec fts;

int _printf(const char *format, ...);
int _write_ch(char);
int print_fmtd(const char *format, fts list[], va_list ap);
int print_ch(va_list);
int print_str(va_list);
int print_pcnt(va_list);
void _write_str(char *str);
unsigned int to_base_len(unsigned int n, int base);
char *reverse(char *s);
char *_cpy(char *dest, char *src, unsigned int n);

int print_to_bin(va_list list);

int print_d(va_list list);
int print_i(va_list list);
unsigned long expo(unsigned int base, unsigned int xponent);
int print_p(va_list list);

#endif
