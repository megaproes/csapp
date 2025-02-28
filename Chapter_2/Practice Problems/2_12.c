#include <stdio.h>

int main(int argc, char const *argv[])
{
	// A: x &= 0xFF
	// B: ~x & ~(0xFF) | (x & 0xFF)
	// C: x & ~0xFF
	int x = 0x87654321;
	printf("%X\n", ~x & ~(0xFF) | (x & 0xFF));
	return 0;
}
