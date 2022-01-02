#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int ft_pow(int base, int exp)
{
	int result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

char	ft_byte_to_char(char	*str)
{
	char	result;
	int length;
	int i;
	
	result = 0;
	length = strlen(str);
	i = 0;
	if (length == 0 || length > 8)
		exit(EXIT_FAILURE);
	while (i < length)
	{
		result <<= 1;
		result |= str[i] - 48;
		i++;		
	}
	return (result);
}

int main()
{
	char c = ft_byte_to_char("111");
	if (isprint(c))
    	putchar(c); // just print printable characters
    else if (c == '\n')
        printf("\\n"); // display newline as \n
    else
        printf("0x%02x", c); // print everything else as a number
}