#include <stdio.h>
unsigned replace_byte(unsigned x, int i, unsigned char b)
{
	unsigned mask = b << (i * __CHAR_BIT__);
	x &= ~(0xFF << (i * __CHAR_BIT__));
	return x | mask;
}

unsigned replace_byte_ptr(unsigned x, int i, unsigned char b)
{
	unsigned char *p = (unsigned char *)&x;
	p[i] = b;
	return x;
}
