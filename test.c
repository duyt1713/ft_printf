#include "ft_printf.h"
#include <string.h>
#include <limits.h>

int	main(void)
{
	int	count, printf_count, comp;

/* 	printf("\nft_print_char\n");		//ft_print_char

	count = ft_print_char('A');				// Test with a single character
	printf_count = printf("A");
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_char('\t');			// Test with a space character
	printf_count = printf("\t");
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_char('!');				// Test with a special character
	printf_count = printf("!");
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_char('\0');			// Test with an unprintable character
	printf_count = printf("%c", '\0');
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	printf("\nft_print_str\n");			// ft_print_str

	count = ft_print_str("Hello, World!");	// Test with a short string
	printf_count = printf("Hello, World!");
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_str("");				// Test with an empty string
	printf_count = printf("");
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_str("Hello\tWorld\n");	// Test with a string containing special characters
	printf_count = printf("Hello\tWorld\n");
	comp = count - printf_count;
	printf("Difference: %i\n", comp);

	char long_str[10000];					// Test with a very long string
	memset(long_str, 'A', 99);					// Edit string size here
	long_str[99] = '\n';						// Edit end element here
	count = ft_print_str(long_str);
	printf_count = printf("%s", long_str);
	comp = count - printf_count;
	printf("Difference: %i\n", comp);

	count = ft_print_str(NULL);				// Test with a NULL string
	printf_count = printf("%s", NULL);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	printf("\nft_print_decimal\n");		// ft_print_decimal

	count = ft_print_decimal(1234);			// Test with a positive number
	printf_count = printf("%d", 1234);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_decimal(-6789);		// Test with a negative number
	printf_count = printf("%d", -6789);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_decimal(0);			// Test with zero
	printf_count = printf("%d", 0);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_decimal(INT_MAX);		// Test with INT_MAX
	printf_count = printf("%d", INT_MAX);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_decimal(INT_MIN);		// Test with INT_MIN
	printf_count = printf("%d", INT_MIN);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	printf("\nft_print_udecimal\n");	// ft_print_udecimal

	count = ft_print_udecimal(4242);		// Test with a positive number
	printf_count = printf("%u", 4242);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_udecimal(-9999);		// Test with a negative number
	printf_count = printf("%u", -9999);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_udecimal(0);			// Test with zero
	printf_count = printf("%u", 0);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_udecimal(UINT_MAX);		// Test with UINT_MAX
	printf_count = printf("%u", UINT_MAX);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_udecimal(INT_MIN);		// Test with INT_MIN
	printf_count = printf("%u", INT_MIN);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_udecimal(INT_MAX);		// Test with INT_MAX
	printf_count = printf("%u", INT_MAX);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp); */

	printf("\nft_print_hex\n");			//ft_print_hex

	count = ft_print_hex(255);				// Test with a positive number
	printf_count = printf("%x", 255);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_hex(0);				// Test with zero
	printf_count = printf("%x", 0);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_hex(-255);				// Test with a negative number
	printf_count = printf("%x", -255);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_hex(2147483647);		// Test with a large positive number
	printf_count = printf("%x", 2147483647);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);

	count = ft_print_hex(-2147483648);		// Test with a large negative number
	printf_count = printf("%lx", -2147483648);
	comp = count - printf_count;
	printf("\nDifference: %i\n", comp);
}
