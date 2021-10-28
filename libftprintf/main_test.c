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
	ft_printf(" %p ", 15); // 3*/
	ft_printf(" %p ", 16); // 4
	/*ft_printf(" %p ", 17); // 5
	ft_printf(" %p %p ", LONG_MIN, LONG_MAX); // 6*/
	//ft_printf(" %p %p ", INT_MIN, INT_MAX); // 7
	//ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX); // 8
	//ft_printf(" %p %p ", 0, 0); // 9
	//ft_printf("\n");

	/*printf(" %p ", (void *)-1); // 1
	printf(" %p ", (void *)1); // 2
	printf(" %p ", (void *)15); // 3*/
	printf(" %p ", (void *)16); // 4
/*	printf(" %p ", (void *)17); // 5
	printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX); // 6*/
	//printf(" %p %p ", (void *)-2147483648, (void *)INT_MAX); // 7
	//printf(" %p %p ", (void *)ULONG_MAX, (void *)-ULONG_MAX); // 8
	//printf(" %p %p ", (void *)0, (void *)0); // 9
	//printf("%zu", ULONG_MAX);

	/*int	arr[22];
	int arr2[21];

	arr[0] = ft_printf("\n");
	arr[1] = ft_printf(" %d ", 0);
	arr[2] = ft_printf(" %d ", -1);
	arr[3] = ft_printf(" %d ", 1);
	arr[4] = ft_printf(" %d ", 9);
	arr[5] = ft_printf(" %d ", 10);
	arr[6] = ft_printf(" %d ", 11);
	arr[7] = ft_printf(" %d ", 15);
	arr[8] = ft_printf(" %d ", 16);
	arr[9] = ft_printf(" %d ", 17);
	arr[10] = ft_printf(" %d ", 99);
	arr[11] = ft_printf(" %d ", 100);
	arr[12] = ft_printf(" %d ", 101);
	arr[13] = ft_printf(" %d ", -9);
	arr[14] = ft_printf(" %d ", -10);
	arr[15] = ft_printf(" %d ", -11);
	arr[16] = ft_printf(" %d ", -14);
	arr[17] = ft_printf(" %d ", -15);
	arr[18] = ft_printf(" %d ", -16);
	arr[19] = ft_printf(" %d ", -99);
	arr[20] = ft_printf(" %d ", -100);
	arr[21] = ft_printf(" %d ", -101);
	ft_printf(" %d ", INT_MAX);
	ft_printf(" %d ", INT_MIN);
	ft_printf(" %d ", LONG_MAX);
	ft_printf(" %d ", LONG_MIN);
	ft_printf(" %d ", UINT_MAX);
	ft_printf(" %d ", ULONG_MAX);
	ft_printf(" %d ", 9223372036854775807LL);
	ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	arr2[0] = printf("\n");
	arr2[1] = printf(" %d ", 0);
	arr2[2] = printf(" %d ", -1);
	arr2[3] = printf(" %d ", 1);
	arr2[4] = printf(" %d ", 9);
	arr2[5] = printf(" %d ", 10);
	arr2[6] = printf(" %d ", 11);
	arr2[7] = printf(" %d ", 15);
	arr2[8] = printf(" %d ", 16);
	arr2[9] = printf(" %d ", 17);
	arr2[10] = printf(" %d ", 99);
	arr2[11] = printf(" %d ", 100);
	arr2[12] = printf(" %d ", 101);
	arr2[13] = printf(" %d ", -9);
	arr2[14] = printf(" %d ", -10);
	arr2[15] = printf(" %d ", -11);
	arr2[16] = printf(" %d ", -14);
	arr2[17] = printf(" %d ", -15);
	arr2[18] = printf(" %d ", -16);
	arr2[19] = printf(" %d ", -99);
	arr2[20] = printf(" %d ", -100);
	arr2[21] = printf(" %d ", -101);
	printf("\n\n");
	int i = 1;
	while (i < 22)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	i = 1;
	while (i < 22)
	{
		printf("%d ", arr2[i]);
		i++;
	}
	printf(" %d ", INT_MAX);
	printf(" %d ", INT_MIN);
	printf(" %d ", (int)LONG_MAX);
	printf(" %d ", (int)LONG_MIN);
	printf(" %d ", (int)UINT_MAX);
	printf(" %d ", (int)ULONG_MAX);
	printf(" %d ", (int)9223372036854775807LL);
	printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, (int)LONG_MAX, (int)LONG_MIN, (int)ULONG_MAX, 0, -42);

	int g = printf("\n\n%d", -123);
	int d = printf("\n\n%d", -123);
	printf("\n::::::%d:::::::%d", g, d);*/
	return (0);
}