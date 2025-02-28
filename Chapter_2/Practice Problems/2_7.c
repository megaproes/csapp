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
	const char *m = "mnopqr";
	show_bytes((byte_pointer)m, strlen(m));
	// will print 6d 6e 6f 70 71 72
	return 0;
}
