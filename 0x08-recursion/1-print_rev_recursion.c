#include "main.h"
/**
 * _priont_rev_recursionm - Prints a string in reverse.
 * @s:The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev-recursions(s + 1);
		_putchar(*s);
	}
}
