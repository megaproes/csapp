#include <stdio.h>
typedef unsigned char *byte_pointer;
void show_bytes(unsigned char *start, size_t len)
{
	int i;
	for (i = 0; i < len; i++)
		fprintf(stderr, " %.2x", start[i]);
	printf("\n");
}
int main(int argc, char const *argv[])
{
	int a = 0x12345678;
	byte_pointer ap = (byte_pointer)&a;
	show_bytes(ap, 1); /* A. */ 
	show_bytes(ap, 2); /* B. */
	show_bytes(ap, 3); /* C. */
	
	// Little Endian:		Big Endian:
	// A: 78 				12
	// B: 78 56			12 34
	// C: 78 56 34		     12 34 56
	return 0;
}
