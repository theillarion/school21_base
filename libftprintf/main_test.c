#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main()
{
	/*int b = 100;
	//ft_printf("My function:\n");
	int a = ft_printf("Address number(%d): %p\nNumber(%%d): % d\nNumber(%%i): %i\nNumber(%%u): %u\nSymbol: %%\nString: %s\nSymbol: %c\nNumber(HEX): %x and %X\n\n\n", b, &b, INT_MAX, INT_MAX, 3147483647, "ddddd\n", 's', INT_MAX, INT_MAX);
	//printf("Original function:\n");
	int c = printf("Address number(%d): %p\nNumber(%%d): % d\nNumber(%%i): %i\nNumber(%%u): %lu\nSymbol: %%\nString: %s\nSymbol: %c\nNumber(HEX): %x and %X\n\n\n", b, &b, INT_MAX, INT_MAX, 3147483647, "ddddd\n", 's', INT_MAX, INT_MAX);
	
	printf("My function: %d\nOriginal function: %d\n\n", a, c);*/



	// TEST "%c"
	/*ft_printf("Test 1: %c", '0');
	ft_printf("Test 2:  %c ", '0');
	ft_printf("Test 3:  %c", '0' - 256);
	ft_printf("Test 4: %c ", '0' + 256);
	ft_printf("Test 5:  %c %c %c ", '0', 0, '1');
	ft_printf("Test 6:  %c %c %c ", ' ', ' ', ' ');
	ft_printf("Test 7:  %c %c %c ", '1', '2', '3');
	ft_printf("Test 8:  %c %c %c ", '2', '1', 0);
	ft_printf("Test 9:  %c %c %c ", 0, '1', '2');
	ft_printf("\n");

	printf("Test 1: %c", '0');
	printf("Test 2:  %c ", '0');
	printf("Test 3:  %c", '0' - 256);
	printf("Test 4: %c ", '0' + 256);
	printf("Test 5:  %c %c %c ", '0', 0, '1');
	printf("Test 6:  %c %c %c ", ' ', ' ', ' ');
	printf("Test 7:  %c %c %c ", '1', '2', '3');
	printf("Test 8:  %c %c %c ", '2', '1', 0);
	printf("Test 9:  %c %c %c ", 0, '1', '2');
	printf("\n");*/


	/*ft_printf(" %p ", -1); // 1
	ft_printf(" %p ", 1); // 2
	ft_printf(" %p ", 15); // 3
	ft_printf(" %p ", 16); // 4
	ft_printf(" %p ", 17); // 5
	ft_printf(" %p %p ", LONG_MIN, LONG_MAX); // 6*/
	//ft_printf(" %p %p ", INT_MIN, INT_MAX); // 7
	ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX); // 8
	//ft_printf(" %p %p ", 0, 0); // 9
	ft_printf("\n");

	/*printf(" %p ", (void *)-1); // 1
	printf(" %p ", (void *)1); // 2
	printf(" %p ", (void *)15); // 3
	printf(" %p ", (void *)16); // 4
	printf(" %p ", (void *)17); // 5
	printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX); // 6*/
	//printf(" %p %p ", (void *)-2147483648, (void *)INT_MAX); // 7
	printf(" %p %p ", (void *)ULONG_MAX, (void *)-ULONG_MAX); // 8
	//printf(" %p %p ", (void *)0, (void *)0); // 9*/
	printf("%zu", ULONG_MAX);
	return (0);
}