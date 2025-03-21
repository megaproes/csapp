#include <stdio.h>
#include <limits.h>
typedef unsigned char *byte_pointer;
void show_bytes(unsigned char *start, size_t len)
{
	int i;
	for (i = 0; i < len; i++)
		fprintf(stderr, " %.2x", start[i]);
	printf("\n");
}

void show_short(unsigned char *start, size_t len)
{
	int i;
	for (i = 0; i < len; i++)
		fprintf(stderr, " %.2x", start[i]);
	printf("\n");
}
void show_long(unsigned char *start, size_t len)
{
	int i;
	for (i = 0; i < len; i++)
		fprintf(stderr, " %.2x", start[i]);
	printf("\n");
}
void show_double(unsigned char *start, size_t len)
{
	int i;
	for (i = 0; i < len; i++)
		fprintf(stderr, " %.2x", start[i]);
	printf("\n");
}
int main()
{
	// short
	{
		short sx1 = SHRT_MAX;
		short sx2 = SHRT_MIN;
		show_short((byte_pointer)&sx1, sizeof(short));
		show_short((byte_pointer)&sx2, sizeof(short));
	}
	{
		long lx1 = LONG_MAX;
		long lx2 = SHRT_MIN;
		show_long((byte_pointer)&lx1, sizeof(long));
		show_long((byte_pointer)&lx2, sizeof(long));
	}
	{
		double lx1 = 50.50;
		double lx2 = 60.50;
		show_double((byte_pointer)&lx1, sizeof(double));
		show_double((byte_pointer)&lx2, sizeof(double));
	}
	return 0;
}
