int func_A(int x)
{
	// return (x & (-x)) >> (sizeof(int) * __CHAR_BIT__ - 1);
	return ((-x) >> (31) & 1) | ((x >> 31) & 1);
}

int func_A_2(int x)
{
	return (x | -x) >> 31 & 1;
}

int func_B(int x)
{
	int y = ~x;
	return ((y | -y) >> 31) & 1;
}
int func_C(int x)
{
	int lsb = x & 0xFF;
	lsb |= -lsb;
	lsb >>= __CHAR_BIT__ - 1;

	return lsb & 1;
}

int func_D(int x)
{
	int lsb = ~x & 0xFF;
	lsb |= -lsb;
	lsb >>= __CHAR_BIT__ - 1;

	return lsb & 1;
}