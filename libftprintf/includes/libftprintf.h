#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define HEX_LOWER "0123456789abcdef"
#define HEX_UPPER "0123456789ABCDEF"
#define INT_ARGV "cdiu"
#define HEX_ARGV "xX"



int	printf(const char	*format, ...);

#endif