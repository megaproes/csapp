#include <stdio.h>
int func_D(int x)
{
	int lsb = ~x & 0xFF;
	lsb |= -lsb;
	lsb >>= __CHAR_BIT__ - 1;

	return lsb & 1;
}

int main(int argc, char const *argv[])
{
	printf("%i \n", func_D(255));
	return 0;
}
