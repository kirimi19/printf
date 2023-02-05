#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h> /* va_list */
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */

/* helper functions */
char* (*get_func(char i))(va_list);
char *create_buffer(void);
void write_buffer(char *buffer, int len, va_list list);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/* printf functions */
int _printf(const char *format, ...);
char *print_s(va_list list);
char *print_c(va_list list);
char *print_d(va_list list);
char *itob(va_list list);
char *rot13(va_list list);
char *rev_string(va_list list);
char *itoo(va_list list);
char *litoo(va_list list);
char *hitoo(va_list list);
char *hhitoo(va_list list);
char *litox(va_list list);
char *itox(va_list list);
char *itoX(va_list list);
char *convert_to_base(unsigned int num,
	unsigned int base,
	unsigned int case_print);

/**
 * struct types - struct
 * @id: identifier of type to print (e.g. c means char)
 * @func: ptr to functions that print according to identifier (e.g. print_c)
 */

typedef struct types
{
	char id;
	char* (*func)(va_list);
} print;

#endif
