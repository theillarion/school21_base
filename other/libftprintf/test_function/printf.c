#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>
#include <limits.h>

#define HEX_LOWER "0123456789abcdef"
#define HEX_UPPER "0123456789ABCDEF"
#define	DEC	"0123456789"
#define INT_ARGV "cdiu"
#define HEX_ARGV "xX"

size_t	ft_strlen(const char	*str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static void	ft_swap_char(char	*symbol1, char	*symbol2)
{
	char	backup;

	backup = *symbol1;
	*symbol1 = *symbol2;
	*symbol2 = backup;
}

static char	*ft_reverse(char	*str)
{
	size_t	i;
	size_t	j;

	if (str == NULL)
		j = 0;
	else
		j = ft_strlen(str) - 1;
	i = 0;
	while (i < j)
		ft_swap_char(&str[i++], &str[j--]);
	return (str);
}

static size_t	ft_get_discharges(size_t number)
{
	size_t	i;

	if (number == 0)
		return (1);
	i = 0;
	while (number)
	{
		number /= 10;
		i++;
	}
	return (i);
}

/*static int	ft_abs(int number)
{
	if (number < 0)
		return (-number);
	return (number);
}

char	*ft_strdup(const char	*str)
{
	size_t	i;
	char	*new_str;

	new_str = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}*/

/*char	*ft_ltoa(long number)
{
	size_t			i;
	int				sign;
	char			*str;

	sign = 0;
	if (number < 0)
		sign = 1;
	if (number == 0)
		return (ft_strdup("0"));
	str = (char *)malloc((ft_get_discharges(number) + sign + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (number)
	{
		str[i++] = ft_abs(number % 10) + '0';
		number /= 10;
	}
	if (sign == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_reverse(str));
}*/

void	ft_putchar_fd(char symbol, int fd)
{
	write(fd, &symbol, 1);
}

void	ft_putstr_fd(char	*str, int fd)
{
	if (str != NULL)
		write(fd, str, ft_strlen(str));
}

/*void	ft_putnbr_fd(int number, int fd)
{
	if (number == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else
	{
		if (number < 0)
		{
			ft_putchar_fd('-', fd);
			number *= -1;
		}
		if (number > 9)
		{
			ft_putnbr_fd(number / 10, fd);
			ft_putnbr_fd(number % 10, fd);
		}
		else
			ft_putchar_fd(number + 48, fd);
	}
}*/

static long ft_abs(long number)
{
	if (number < 0)
		return (-number);
	return (number);
}

static size_t ft_get_discharges_base(size_t number, int base_int)
{
	size_t	i;

	i = 0;
	while (number)
	{
		number /= base_int;
		i++;
	}
	return (i);
}

char	*ft_convert_to_base(size_t number, char	*base)
{
	char	*result;
	int		base_int;
	size_t	count;
	size_t	i;

	base_int = ft_strlen(base);
	count = ft_get_discharges_base(number, base_int);
	result = (char *)malloc((count + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (number != 0)
	{
		result[i++] = base[number % base_int];
		number /= base_int;
	}
	result[i] = '\0';
	return (ft_reverse(result));
}

void	ft_putlnbr_fd(long number, int fd)
{
	if (number == -1 - 9223372036854775807)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('9', fd);
		ft_putlnbr_fd(223372036854775808, fd);
	}
	else
	{
		if (number < 0)
		{
			ft_putchar_fd('-', fd);
			number *= -1;
		}
		if (number > 9)
		{
			ft_putlnbr_fd(number / 10, fd);
			ft_putlnbr_fd(number % 10, fd);
		}
		else
			ft_putchar_fd(number + 48, fd);
	}
}

/*void	gg(char	symbol, va_list	argv)
{
	if (symbol == 'c')
		ft_putchar_fd(va_arg(argv, int), 1);
	else if (symbol == 's')
		ft_putstr_fd(va_arg(argv, char*), 1);
	else if (symbol == 'p')
		return ; // пока ХЗ
	else if (symbol == 'd' || symbol == 'i')
		ft_putstr_fd(ft_ltoa(va_arg(argv, int)), 1);
	else if (symbol == 'u')
		ft_putstr_fd(ft_ltoa(va_arg(argv, unsigned int)), 1);
	else if (symbol == 'x')
		ft_putstr_fd(ft_base_to(va_arg(argv, int), HEX_LOWER), 1);
	else if (symbol == 'X')
		ft_putstr_fd(ft_base_to(va_arg(argv, int), HEX_UPPER), 1);
}*/

/*char	*ft_strnstr(const char	*str, const char	*to_find, size_t	len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	while (i < len && str[i])
	{
		j = 0;
		while (i < len && str[i] && str[i] == to_find[j])
		{
			j++;
			i++;
		}
		if (j == ft_strlen(to_find))
			return ((char *)&str[i - j]);
		i = i + 1 - j;
	}
	return (NULL);
}*/

int ft_find(const char	*str, const char symbol)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (str[i] == symbol)
			return (i);
		i++;
	}
	if (str[i] && symbol)
		return (i);
	return (-1);
}

/*size_t	ft_process_numbers(char format, long number, va_list	argv)
{
	long	current_number;
	size_t	count;

	count = 0;
	count = ft_get_discharges(number);
	if (number < 0)
		count++;
	if (format == 'c')
		ft_putchar_fd((int)number, 1);
	else if (format == 'p')
	{
		write(1,"0x", 2);
		count += 2;
		ft_putstr_fd(ft_base_to((size_t)number, HEX_LOWER), 1);
	}
	else if (format == 'd' || format == 'i')
		ft_putstr_fd(ft_ltoa((int)number), 1);
	else if (format == 'u')
		ft_putstr_fd(ft_ltoa((unsigned int)number), 1);
	else if (format == 'x')
		ft_putstr_fd(ft_base_to((int)number, HEX_LOWER), 1);
	else if (format == 'X')
		ft_putstr_fd(ft_base_to((int)number, HEX_UPPER), 1);
	return (count);
}*/

int	ft_process_number_hex(const char	format, va_list	argv)
{
	char			*hex_number;
	unsigned int	number;

	number = va_arg(argv, unsigned int);
	if (format == 'x')
		hex_number = ft_convert_to_base((unsigned int)number, HEX_LOWER);
	else if (format == 'X')
		hex_number = ft_convert_to_base((unsigned int)number, HEX_UPPER);
	ft_putstr_fd(hex_number, 1);
	return (ft_strlen(hex_number));
}

int ft_process_number_dec(const char format, va_list	argv)
{
	long	number;
	int		count;

	count = 0;
	number = 0;
	if (ft_find("cdi", format) != -1)
	{
		number = va_arg(argv, int);
		if (format == 'c')
			ft_putchar_fd(number, 1);
		else if (format == 'd' || format == 'i')
			ft_putlnbr_fd(number, 1);
	}
	else if (format == 'u')
	{
		number = va_arg(argv, unsigned int);
		ft_putlnbr_fd((unsigned int)number, 1);
	}
	if (format == 'c')
		count = 1;
	else
		count = ft_get_discharges(number);
	if (number < 0)
		count++;
	return (count);
}

int	ft_process_address(va_list argv)
{
	char	*address;
	unsigned long	number;
	int		count;

	count = write(1, "0x", 2);
	number = va_arg(argv, unsigned long);
	if (number == 0)
	{
		write(1, "0", 1);
		return (++count);
	}
	if (number < 0)
		number *= -1;
	address = ft_convert_to_base(number, HEX_LOWER);
	count += ft_strlen(address);
	ft_putstr_fd(address, 1);
	if (address != NULL)
		free(address);
	return (count);
}

int ft_process_string(va_list	argv)
{
	char	*str;
	int 	count;

	str = va_arg(argv, char*);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count);
}

int ft_parser(va_list argv, const char	*format)
{
	size_t	i;
	int		count;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == ' ' && format[i + 1])
			{
				count += write(1, " ", 1);
				i++;
			}
			if (format[i] == '%')
				count += write(1, "%", 1);
			if (format[i] == 's')
				count += ft_process_string(argv);
			else if (format[i] == 'p')
				count += ft_process_address(argv);
			else if (ft_find(INT_ARGV, format[i]) != -1)
				count += ft_process_number_dec(format[i], argv);
			else if (ft_find(HEX_ARGV, format[i]) != -1)
				count += ft_process_number_hex(format[i], argv);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	return (count);
}

/*int	ft_printf(const char	*str, ...)
{
    va_list	argv;
    int		count;
    size_t 	i;
	char	*current_string;

    count = 0;
	i = 0;
    va_start(argv, str);
    while (str[i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			count += 1;
		}		
		else if (str[i] == '%' && str[i + 1] && str[i + 1] == '%')
		{
			write(1, &str[i++], 1);
			count += 1;
		}
			
		else if (str[i] == '%' && str[i + 1])
		{
			if (ft_find(INT_ARGV, str[i + 1]) != -1)
			{
				count += ft_process_numbers(str[i + 1], current_number, argv);

			}
			else if (str[i + 1] == 's')
			{
				current_string = va_arg(argv, char*);
				ft_putstr_fd(current_string, 1);
				count += ft_strlen(current_string);
			}
			i++;
		}
		i++;
	}
	va_end(argv);
	count = i;
    return (count);
}*/

int	ft_printf(const char	*format, ...)
{
	va_list	argv;
	int		count;

	va_start(argv, format);
	count = ft_parser(argv, format);
	va_end(argv);
	return (count);
}

int main()
{
	//int b = 100;
	//int a = ft_printf("Address number(%d): %p\nNumber(%%d): %  d\nNumber(%%i): %i\nNumber(%%u): %u\nSymbol: %%\nString: %s\nSymbol: %c\nNumber(HEX): %x and %X\n\n", b, &b, INT_MAX, INT_MAX, 3147483647, "ddddd", 's', INT_MAX, INT_MAX);
	//int c = printf("Address number(%d): %p\nNumber(%%d): %  d\nNumber(%%i): %i\nNumber(%%u): %lu\nSymbol: %%\nString: %s\nSymbol: %c\nNumber(HEX): %x and %X\n\n", b, &b, INT_MAX, INT_MAX, 3147483647, "ddddd", 's', INT_MAX, INT_MAX);
	
	//int a = ft_printf("String: %s\nSymbol: %c\n", "ddddd", 's');
	//int c = printf("String: %s\nSymbol: %c\n", "ddddd", 's');
	//printf("%d and %d", a, c);
	ft_printf(" %p", ULONG_MAX);
	return (0);
}
