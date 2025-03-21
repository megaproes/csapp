#include <stddef.h>
#include <stdio.h>
typedef unsigned char *byte_pointer;
void show_bytes(unsigned char *start, size_t len)
{
	int i;
	for (i = 0; i < len; i++)
		fprintf(stderr, " %.2x", start[i]);
	printf("\n");
}

int main()
{
	int x = 0x12345678;
	show_bytes((byte_pointer)&x, sizeof(int));
	return 0;
}
