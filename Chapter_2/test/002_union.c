#include <stdio.h>
union
{
	int i;
	char c[4];
} u;

int main(int argc, char const *argv[])
{
	u.i = 0x12345678;
	// Now u.c[0] depends on endianness

	printf("%X %X %X %X\n", u.c[0], u.c[1], u.c[2], u.c[3]); // 78 56 34 12
	return 0;
}
