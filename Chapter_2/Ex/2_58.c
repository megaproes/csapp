#include <stdio.h>

int is_little_endian()
{
	unsigned int x = 1; // 0x00000001
	unsigned char *p = (unsigned char *)&x;
	return *p; // if little-endian, p[0] == 1
}
