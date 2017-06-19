#ifndef PRINT_F
#define PRINT_F
/**
 * struct _Printf - struct for matching data type with print function
 * @printType: char to determine type to print
 * @f: associated function
 */
typedef struct _Printf
{
	char printType;
	int (*f)();
} _Printf_t;


int _putchar(char c);
int _printf(const char *format, ...);
#endif /* PRINT_F */
