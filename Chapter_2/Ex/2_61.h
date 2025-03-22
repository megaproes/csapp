int func_A(int x)
{
	// return (x & (-x)) >> (sizeof(int) * __CHAR_BIT__ - 1);
	return ((-x) >> (31) & 1) | ((x >> 31) & 1);
}

int func_A_2(int x)
{
	return (x | -x) >> 31 & 1;
}

int func_B(int x) {
	
}