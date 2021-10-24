#include <stdio.h>
#include <limits.h>
#include "libftprintf.h"

int main()
{
	int b = 100;
	//ft_printf("My function:\n");
	int a = ft_printf("Address number(%d): %p\nNumber(%%d): % d\nNumber(%%i): %i\nNumber(%%u): %u\nSymbol: %%\nString: %s\nSymbol: %c\nNumber(HEX): %x and %X\n\n", b, &b, INT_MAX, INT_MAX, 3147483647, "ddddd", 's', INT_MAX, INT_MAX);
	//printf("Original function:\n");
	int c = printf("Address number(%d): %p\nNumber(%%d): % d\nNumber(%%i): %i\nNumber(%%u): %lu\nSymbol: %%\nString: %s\nSymbol: %c\nNumber(HEX): %x and %X\n\n", b, &b, INT_MAX, INT_MAX, 3147483647, "ddddd", 's', INT_MAX, INT_MAX);
	
	printf("My function: %d\nOriginal function: %d\n", a, c);
	return (0);
}