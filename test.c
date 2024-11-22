#include "ft_printf.h"
#include <string.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void run_test(int count, int pcount)
{
	int comp = count - pcount;
	printf("                                            \
	TEST %s!\n", comp != 0 ? "FAILED" : "SUCCEEDED");
}

int main(void)
{
	int count, pcount;

	printf("Test category 1: print single characters\n");
	count = ft_printf("%c %c %c %c %c\n", 'A', '\t', '!', '\0', '1');
	pcount = printf("%c %c %c %c %c\n", 'A', '\t', '!', '\0', '1');
	run_test(count, pcount);


	printf("Test category 2.1: print strings\n");
	count = ft_printf("%s %s %s %s\n", "( ͡° ͜ʖ ͡°) ", "", "Ayyy\tlMa0!!!!@", "\0");
	pcount = printf("%s %s %s %s\n", "( ͡° ͜ʖ ͡°) ", "", "Ayyy\tlMa0!!!!@", "\0");
	run_test(count, pcount);

	printf("Test category 2.2: print a very long string\n");
	char long_str[10000];
	memset(long_str, 'A', 9999);
	long_str[9999] = '\0';
	count = ft_printf("%s\n", long_str);
	pcount = printf("%s\n", long_str);
	run_test(count, pcount);

	printf("Test category 2.3: print a NULL string\n");
	char *p = NULL;
	count = ft_printf("%s\n", p);
	pcount = printf("%s\n", p);
	run_test(count, pcount);

	printf("Test category 3.1: print NULL pointer\n");
	count = ft_printf("%p\n", p);
	pcount = printf("%p\n", p);
	run_test(count, pcount);

	printf("Test category 3.2: print string address\n");
	count = ft_printf("%p\n", long_str);
	pcount = printf("%p\n", long_str);
	run_test(count, pcount);

	printf("Test category 3.3: print pointer to the string above\n");
	void *pp = &long_str;
	count = ft_printf("%p\n", pp);
	pcount = printf("%p\n", pp);
	run_test(count, pcount);

	printf("Test category 3.4: print pointer to a double variable\n");
	double var = 4.2;
	void *ppp = &var;
	count = ft_printf("%p\n", ppp);
	pcount = printf("%p\n", ppp);
	run_test(count, pcount);

	printf("Test category 3.5: print pointer to dynamically allocated memory\n");
	int *dynamic_ptr = (int *)malloc(sizeof(int));
	*dynamic_ptr = 100;
	count = ft_printf("%p\n", dynamic_ptr);
	pcount = printf("%p\n", dynamic_ptr);
	run_test(count, pcount);
	free(dynamic_ptr);

	printf("Test category 4: print decimal numbers\n");
	count = ft_printf("%d %d %d %d %d %d\n", 0, 1234, -6789, INT_MAX, INT_MIN, UINT_MAX);
	pcount = printf("%d %d %d %d %d %d\n", 0, 1234, -6789, INT_MAX, INT_MIN, UINT_MAX);
	run_test(count, pcount);

	printf("Test category 5: print intergers\n");
	count = ft_printf("%i %i %i %i %i %i\n", 0, 1234, -6789, INT_MAX, INT_MIN, UINT_MAX);
	pcount = printf("%i %i %i %i %i %i\n", 0, 1234, -6789, INT_MAX, INT_MIN, UINT_MAX);
	run_test(count, pcount);

	printf("Test category 6: print unsigned decimal numbers\n");
	count = ft_printf("%u %u %u %u %u %u\n", 0, 1234, -6789, INT_MAX, INT_MIN, UINT_MAX);
	pcount = printf("%u %u %u %u %u %u\n", 0, 1234, -6789, INT_MAX, INT_MIN, UINT_MAX);
	run_test(count, pcount);

	printf("Test category 7: print numbers in hexadecimal lowercase format\n");
	count = ft_printf("%x %x %x %x %x %x\n", 0, 1234, -6789, INT_MAX, INT_MIN, UINT_MAX);
	pcount = printf("%x %x %x %x %x %x\n", 0, 1234, -6789, INT_MAX, INT_MIN, UINT_MAX);
	run_test(count, pcount);

	printf("Test category 8: print numbers in hexadecimal uppercase format\n");
	count = ft_printf("%X %X %X %X %X %X\n", 0, 1234, -6789, INT_MAX, INT_MIN, UINT_MAX);
	pcount = printf("%X %X %X %X %X %X\n", 0, 1234, -6789, INT_MAX, INT_MIN, UINT_MAX);
	run_test(count, pcount);

	printf("Test category 9: print a percent sign\n");
	count = ft_printf("%%\n");
	pcount = printf("%%\n");
	run_test(count, pcount);

	printf("Test category 10: random bullshit go\n");
	count = ft_printf("henlo%iabc %%c%sa testi%%%%%%i%p%c\n", 42, "lmao", pp, '\b');
	pcount = printf("henlo%iabc %%c%sa testi%%%%%%i%p%c\n", 42, "lmao", pp, '\b');
	run_test(count, pcount);

	count = ft_printf("String: %s, Char: %c, Int: %d, Unsigned: %u, Hex: %x, Pointer: %p\n", "test", 'A', -123, 123, 0xabc, pp);
	pcount = printf("String: %s, Char: %c, Int: %d, Unsigned: %u, Hex: %x, Pointer: %p\n", "test", 'A', -123, 123, 0xabc, pp);
	run_test(count, pcount);

	count = ft_printf("Mix: %d %u %x %X %p %s %c %%\n", -1, 1, 0x1, 0x1, pp, "mix", 'M');
	pcount = printf("Mix: %d %u %x %X %p %s %c %%\n", -1, 1, 0x1, 0x1, pp, "mix", 'M');
	run_test(count, pcount);

	count = ft_printf("Edge cases: %d %d %u %u %x %x %p %p\n", INT_MAX, INT_MIN, UINT_MAX, 0, 0, -1, NULL, pp);
	pcount = printf("Edge cases: %d %d %u %u %x %x %p %p\n", INT_MAX, INT_MIN, UINT_MAX, 0, 0, -1, NULL, pp);
	run_test(count, pcount);

	printf("Test category 11: more complex cases that will probably fail\n");
	count = ft_printf("Floating point: %f, Exponential: %e, Hex float: %a\n", 123.456, 123.456, 123.456);
	pcount = printf("Floating point: %f, Exponential: %e, Hex float: %a\n", 123.456, 123.456, 123.456);
	run_test(count, pcount);

	count = ft_printf("Octal: %o, Unsigned: %u, Hex: %x, HEX: %X\n", 123, 123, 123, 123);
	pcount = printf("Octal: %o, Unsigned: %u, Hex: %x, HEX: %X\n", 123, 123, 123, 123);
	run_test(count, pcount);

	count = ft_printf("Width and precision: %10.5d, %10.5s\n", 123, "test");
	pcount = printf("Width and precision: %10.5d, %10.5s\n", 123, "test");
	run_test(count, pcount);

	count = ft_printf("Left-justified: %-10d, %-10s\n", 123, "test");
	pcount = printf("Left-justified: %-10d, %-10s\n", 123, "test");
	run_test(count, pcount);

	count = ft_printf("Zero-padded: %010d, %10s\n", 123, "test");
	pcount = printf("Zero-padded: %010d, %10s\n", 123, "test");
	run_test(count, pcount);

	count = ft_printf("Alternate form: %#x, %#o\n", 123, 123);
	pcount = printf("Alternate form: %#x, %#o\n", 123, 123);
	run_test(count, pcount);
}
