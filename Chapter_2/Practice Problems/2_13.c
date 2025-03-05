#include <stdio.h>
int bis(int x, int m)
{
	return x | m;
}
int bic(int x, int m)
{
	return x & (~m);
}

/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y)
{
	int result = bis(x, y);
	return result;
}
/* Compute x^y using only calls to functions bis and bic */ // x^y =
int bool_xor(int x, int y)
{
	int result = bis(bic(x, y), bic(y, x));
	return result;
}
int main(int argc, char const *argv[])
{
	printf("%X\n", bool_xor(12, 20));
	return 0;
}
